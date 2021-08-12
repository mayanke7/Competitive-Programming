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
        int k,m,n;
        cin>>k>>m>>n;
        int p[m];
        int q[n];
        for(int i=0;i<m;i++) cin>>p[i];
        for(int i=0;i<n;i++) cin>>q[i];

        vector<int> res;
        bool pos= false;
        int pp=0,qq=0;
        while(pp<m || qq<n){

            while(pp<m && p[pp]>0 && k>=p[pp]){
                res.push_back(p[pp]);
                pp++;
            }

            while(qq<n && q[qq]>0 && k>=q[qq]){
                res.push_back(q[qq]);
                qq++;
            }
            

                while(pp<m && p[pp]==0){
                    res.push_back(p[pp]);
                    pp++;
                    k++;
                }
                while(qq<n && q[qq]==0){
                    res.push_back(q[qq]);
                    qq++;
                    k++;
                }
           
            if((pp<m && k<p[pp]) && (qq<n && k<q[qq])){
                pos= true;
                break;
            }else if(qq>=n && (pp<m && k<p[pp]) ){
                pos= true;
                break;
            }else if(pp>=m && (qq<n && k<q[qq])){
                pos= true;
                break;
            }
        }

        if(pos ) cout<<-1<<endl;
        else {
            for(auto i: res) cout<<i<<" ";
            cout<<endl;
        }

    }
}