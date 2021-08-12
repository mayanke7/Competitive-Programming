#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define ss(s)   scanf("%s",s)
#define pi(x)   printf("%d\n",x)
#define pl(x)   printf("%lld\n",x)
#define ps(s)   printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        ll s1=0, s2=0;
        priority_queue<int, vector<int>, greater<int>> pq1,pq2;
        priority_queue<int> pq3;
        for(int i=0;i<n;i++) {
            int u;
            cin>>u;
            s1+=u;
            pq1.push(u);

        }
        
        for(int i=0;i<n;i++) {
            int u;
            cin>>u;
            s2+=u;
            pq2.push(u);
        }

        int k= (n/4);
        //deb(k);
        while(k--){
            int u= pq1.top();
            s1-=u;
            pq1.pop();
            u= pq2.top();
            pq3.push(u);
            s2-=u;
            pq2.pop();
        }
        int res=0;
        
        while(s2>s1){
            //deb2(s1,s2);
            res++;
            n++;
            s1+=100;
            if(n%4!=0 && !pq3.empty()){
                s2+= pq3.top();
                pq3.pop();
            }
            if(n%4==0){
                if(pq1.size()!=0){
                    int u= pq1.top();
                    pq1.pop();
                    s1-=u;
                }else{
                    s1-=100;
                }
            }
        }

        cout<<res<<endl;

    }
}