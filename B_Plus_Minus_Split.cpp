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
        string str;cin>>str;

        int plus=0, minus=0;
        for(auto c: str) {
            if(c=='+') plus++;
            else minus++;
        }

        if(plus>minus) swap(plus, minus);

        cout<<minus-plus<<endl;

    
    }
}



