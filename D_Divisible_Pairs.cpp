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
        LL n,x,y;
        cin>>n>>x>>y;
        map<string, LL> freq;
        LL res=0;
        for(LL i=0;i<n;i++){
            LL num; cin>>num;
            string keyc= to_string(num%x !=0 ? x-(num%x): 0)+"-"+to_string(num%y);
            string keyst= to_string(num%x)+"-"+ to_string(num%y);
            // DEB2(keyc, keyst);
            if(freq.count(keyc))
                res+= freq[keyc];
            
            freq[keyst]++;
        }
        cout<<res<<endl;
    
    }
}



