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
        LL n, k;
        cin>>n>>k;
        LL res=0;

        if(k>=31) res= n+1;
        else{
            if(n<=((1<<k)-1)) res= n+1;
            else res= (1<<k);
        }
        
        cout<<res<<endl;
        
    
    }
}



