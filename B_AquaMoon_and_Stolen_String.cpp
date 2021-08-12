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
        int n,m;
        cin>>n>>m;
        unordered_map<char, int> M;
        unordered_set<string> arr;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            ////deb(str);
            arr.insert(str);
            for(int j=0;j<m;j++){
                M[str[j]]++;    
            }
        }

        string str= "";
        int nn= (n-1);
        for(int i=0;i<nn;i++){
            string str;
            cin>>str;
            ///deb(str);
            for(int j=0;j<m;j++){
                M[str[j]]--;    
            }
        }


        for(auto j: M){
            int u= j.second;
            while(u--){
                str+= j.first;
            }
        }
        
        //cout<<str<<endl;
        sort(str.begin(), str.end());
        do{
            if(arr.find(str)!=arr.end()){
                cout<<str<<endl;
                break;

            }
        }while (next_permutation(str.begin(), str.end()));

        //cout<<flush;
        
    }
}