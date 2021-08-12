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


bool cmp(vector<vector<int>>& arr, int i, int j){
    int c=0;
    for(int p=0;p<5;p++){
        if(arr[i][p]<arr[j][p]) c++;
    }
    if(c>=3) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int>(5));
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++) cin>>arr[i][j];
        }
        int res=0;
        for(int i=1;i<n;i++){
            if(cmp(arr, i, res)) res=i;
            //deb(res);
        }
        //cout<<res+1<<endl;

        for(int i=0;i<n;i++){
            if(i==res) continue;
            if(!(cmp(arr, res, i))) {
                res=-2;
                break;
            }
        }

        cout<<res+1<<endl;


        




    }
}