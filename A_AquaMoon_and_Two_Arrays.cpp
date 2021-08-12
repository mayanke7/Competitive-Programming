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
        int arr[n];
        int brr[n];

        for(int i=0;i<n;i++) cin>>arr[i];
        
        for(int i=0;i<n;i++) cin>>brr[i];
        stack<int> minus, plus;
        int m=0, p=0;
        for(int i=0;i<n;i++){
            if(arr[i]-brr[i]>0){
                int k= arr[i]-brr[i];
                while(k--) minus.push(i);
                m+= arr[i]-brr[i];
            }else if(arr[i]-brr[i]<0){
                int k= brr[i]-arr[i];
                while(k--) plus.push(i);
                p+=brr[i]-arr[i];
            }
        }

        if(m==p && minus.size()== plus.size()){
            cout<<plus.size()<<endl;
            while(!plus.empty()){
                cout<<minus.top()+1<<" "<<plus.top()+1<<endl;
                plus.pop();
                minus.pop();    
            }
        }else cout<<-1<<endl;
    }
}