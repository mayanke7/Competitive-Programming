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
        for(int i=0;i<n;i++) cin>>arr[i];

        int left[n];
        left[0]= arr[0];
        int mx= 0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[mx]) mx= i;
            left[i]= __gcd(left[i-1], arr[i]);
            //deb(left[i]);
        }

        int right[n];
        right[n-1]= arr[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]= __gcd(right[i+1], arr[i]);
            //deb(right[i]);
        }
        //deb(left[n-2]);
        int ind= 0;
        int mxgcd= right[1];
        if(mxgcd<left[n-2]){
            ind= n-1;
            mxgcd= left[n-2];
        }
        //deb(mxgcd);
        for(int i=1;i<n-1;i++){
            int x= __gcd(left[i-1], right[i+1]);
            //deb(x);
            if(x>mxgcd){
                ind= i;
                mxgcd= x;
            }
        }
        if(mxgcd==left[n-1]) arr[mx]= mxgcd;
        else arr[ind]= mxgcd;
        //deb(mxgcd);
        ll res=0;
        for(int i=0;i<n;i++){
            //deb(arr[i]);
            res+= arr[i]/mxgcd;
        }
        cout<<res<<endl;
    }
}