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
        LL n,k;
        cin>>n>>k;
        bool poss= true;
        LL prod= 1;
        for(LL i=0;i<n;i++) {
            LL u;
            cin>>u;
            prod*= u;
            if(prod>2023) poss= false;
        }
        
        if(poss && 2023%prod!=0) poss= false;
        if(poss){
            cout<<"YES"<<endl;
            cout<<2023/prod<<" ";
            for(LL i=0;i+1<k;i++) cout<<"1"<<" ";
            cout<<endl;
        }else cout<<"NO"<<endl;
            


    }
}



