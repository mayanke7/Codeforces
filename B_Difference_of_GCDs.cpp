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
        int n, l, r;
        cin>>n>>l>>r;

        vector<int> res;
        bool poss= true;
        for(int i=1;i<=n && poss;i++){
            bool curSitu= false;
            for(int p = (l/i)*i; p<=r && poss;p+=i){
                //DEB2(p,i);
                if(p>=l && p%i==0) {
                    curSitu= true;
                    res.push_back(p);
                    break;
                }
            }
            if(!curSitu) poss= false;
        }

        if(poss){
            cout<<"YES"<<endl;
            for(auto u: res) cout<<u<<" ";
            cout<<endl;
        }else cout<<"NO"<<endl;
    
    }
}



