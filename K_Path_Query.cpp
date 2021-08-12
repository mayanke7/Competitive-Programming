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


vector<int> parent;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        G.resize(n);
        for(int i=0;i<n-1;i++){
            ll a,b;
            cin>>a>>b;
            G[a-1].push_back(b-1);
            G[b-1].push_back(a-1);
        }

        ll q;
        cin>>q;
        while(q--){
            int k= 0;
            vector<ll> path(k);
            for(int i=0;i<k;i++){
                cin>>path[i];
            }

            if(util(path)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
}