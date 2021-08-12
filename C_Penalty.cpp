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


int util(int cur, string str, int a, int b){
    
    int aa= (cur)/2+ (cur&1);
    int bb= (cur)/2;

    if(cur>=10) return 10;

    if(str[cur-1]=='1'){
        if(cur&1) a++;
        else b++;
    }else if(str[cur-1]=='?'){
        if(!(cur&1)) {
            if(a<b+1){
                int y= a+(5-aa);
                if(b+1>y) {             
                    return cur;
                }
            }
            if(a>b){
                int y= b+(5-bb);
                if(a>y) return cur;
            }
            return min(
                util(cur+1, str, a,b+1),
                util(cur+1, str,a, b)
            );
        }
        else {
            if(1+a>b){
                int y= b+(5-bb);
                if(a+1>y) return cur;
            }
            if(a<b){
                int y= a+(5-aa);
                if(b>y) return cur;
            }
            return min(
                util(cur+1, str, a+1,b),
                util(cur+1, str,a, b)
            );
        }
        
    }

    

    if(a>b){
        int y= b+(5-bb);
        if(a>y) return cur;
    }
    if(a<b){
        int y= a+(5-aa);
        if(b>y) return cur;
    }

    return util(cur+1, str, a,b);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<util(1, str,0,0)<<endl;
    }
}