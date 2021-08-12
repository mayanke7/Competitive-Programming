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
        string s,t;
        cin>>s>>t;
        ll ss=s.size();
        ll tt= t.size();
        bool pos= false;
        for(ll i=0;i<ss;i++){
            for(ll j=i;j<ss;j++){
                int s1= j+1-i;
                string p= s.substr(i, s1);
                int s2= tt-s1;
                //deb2(s1,s2);
                if(s2>0){
                    int ind= j-s2;
                    if(ind>=0){
                        string q= s.substr(ind, s2);
                        reverse(q.begin(), q.end());
                        p+=q;
                    } 
                }
                if(p==t) pos= true;
            }
        }

        if(pos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}