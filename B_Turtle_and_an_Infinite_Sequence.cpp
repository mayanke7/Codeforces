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
        LL n, m;
        cin>>n>>m;
        LL fulcrum= n;
        LL w= n+m;
        LL p=0;
        while(1<<p <= w) p++;
        p= 1<<p; p--;
        fulcrum |= p;

        if(m<n & m){
            LL q= 0;
            while(1<<q >m) q++;
            q= 1<<q; q--;
            LL res= n | q;
            p++;
            LL dist=p-n;
            DEB(dist);
            DEB(res);

        }
       

        cout<<fulcrum<<endl;
    
    }
}



