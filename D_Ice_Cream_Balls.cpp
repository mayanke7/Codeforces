#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define DEB(x) cout << #x << "=" << x << endl
#define DEB2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PB push_back
#define F first
#define S second
#define ALL(x) x.begin(), x.end()
typedef pair<int, int>  PII;
typedef pair<LL, LL>    PLL;
const int MOD = 1000000007;
#define PI 3.1415926535897932384626





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        LL n; cin>>n;
        LL low= 1, high=n;
        while(low<high){
            LL mid= low + (high- low)/2;
            if(mid* (mid+1) < 2*n){
                low= mid+1;
            }else high= mid;
        }

        LL w;
        if(low&1){
            w= (((low+1)/2)*low)-n;
        }else{
            w= ((low+1)*(low/2))-n;
        }
        cout<<2*low-w<<endl;
    
    }
}



