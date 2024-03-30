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
        LL n;
        cin>>n;
        string s, f;
        cin>>s>>f;
        LL ss=0, sf=0;

        for(int i=0;i<n;i++){
            if(s[i]==f[i]) continue;
            else if(s[i]=='1') ss++;
            else if(f[i]=='1') sf++;
        }

        if(sf>ss) swap(ss, sf);

        LL res= ss;
        cout<<res<<endl;
    
    }
}



