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
    LL n, m; cin>>n>>m;
    LL bmax= LLONG_MIN, bmax2=LLONG_MIN, bsum=0;
    LL gmin= LLONG_MAX, gsum=0;
    vector<LL> g(m);
    vector<LL> b(n);
    for(auto &c : b) {
        cin>>c;
        bsum+=c;
        if(c>=bmax){
            bmax2=bmax;
            bmax= c;
        }else if(c>=bmax2){
            bmax2= c;
        }
    }
    for(auto &c : g) {
        cin>>c;
        gsum+=c;
        gmin= min(gmin, c);
    }
    

    if(bmax> gmin) cout<<-1<<endl;
    else{
        LL res= (bsum * m) - ((m-1) * bmax) + gsum;
        if(bmax==gmin) res-=  bmax;
        else res-= bmax2;
        cout<<res<<endl;
    }


}



