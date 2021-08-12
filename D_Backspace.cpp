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
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int ss=s.size();
        int tt= t.size();

        ss--;
        tt--;
        while(ss>=0 && tt>=0){
            if(s[ss]==t[tt]){
                ss--;
                tt--;
            }else{
                ss-=2;
            }
        }

        //deb2(ss,tt);

        if(tt<0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }
}