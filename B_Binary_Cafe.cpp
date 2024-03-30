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
        int n, k;
        cin>>n>>k;
        int res=0;

        while(n>0){
            int w=k;
            DEB2(w, 1<<w);
            int q;
            while(q= 1<<w > n){
                DEB2(1<<w , n);
                w--;
                
            }
            
            DEB(w);
            
            DEB2(res, n);
            res+= 1<<w;
            n-= 1<<w;
        }
        cout<<res<<endl;
        
    
    }
}



