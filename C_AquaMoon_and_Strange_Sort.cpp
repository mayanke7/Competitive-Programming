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
        unordered_map<int, unordered_set<int>> m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]].insert(i);
        }


        sort(arr, arr+n);
        bool pos= true;
        for(int i=0; pos & i<n;i++){
            bool don= false;
            for(auto p: m[arr[i]]){
                int k= p-i;
                if(k<0) k*=-1;
                if(k%2==0){
                    m[arr[i]].erase(p);
                    don= true;
                    break;
                }
            }
            if(!don) pos= false;
        }

        if(pos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}