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
        LL n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<int> m(n);
        for(LL i=0;i<n;i++) cin>>m[i];

        bool poss= true;
        LL prev=0;

        for(LL i=0;i<n && poss;i++){
            LL activeEne= (m[i]-prev)*a;
            if(activeEne< b) f-=activeEne;
            else f-=b;
            if(f<=0) poss= false;
            prev= m[i];
        }

        if(poss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}



