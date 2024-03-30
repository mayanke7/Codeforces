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
        cin>> n;
        LL k=2;
        bool poss= false;
        while((1+k+k*k)<=n && !poss){
            LL s= (k-1)* n +1;
            while(s%k==0 && s!=0)s/=k;
            if(s==1) poss=true;
            k++;
        }

        if(poss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    
    }
}



