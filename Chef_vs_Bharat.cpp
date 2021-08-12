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



long long power(long long x, long long int y, long long p){
    long long res = 1;
    x = x%p; 
  
    if (x==0) return 0; 
    while (y > 0){
        if (y&1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> dp;
    dp.resize(100001);
    dp[0]=0;
    for(int i=1;i<10;i++){
        dp[i]= dp[i-1]+ i;
    }
    for(ll i=10;i<100001;i++){
        ll p= i/10;
        string str= to_string(p);
        string s= to_string(i);
        reverse(str.begin(), str.end());
        string num= s+str;
        ll u= stoll(num, nullptr, 10);
        dp[i]= dp[i-1]+ u;
    }

    
    ll t;
    sl(t);
    while(t--){
        ll l,r;
        sl(l);
        sl(r);
        pl(power(dp[l]-dp[l-1],dp[r]-dp[l], mod));
    }
    
    
}