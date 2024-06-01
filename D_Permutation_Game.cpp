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
        LL n,k,pb,ps;cin>>n>>k>>pb>>ps;
        pb--, ps--;
        LL p[n]; LL a[n];
        for(LL i=0;i<n;i++) cin>>p[i], p[i]--;
        for(LL i=0;i<n;i++) cin>>a[i];
        

        LL bodyaScore=0, curBodyaScore=0;
        LL sashaScore=0, curSashaScore=0;
        vector<bool> visB(n,false);
        vector<bool> visS(n, false);
        
        for(LL i=1;i<=k;i++){
            curBodyaScore += a[pb]; 
            visB[pb]=true;
            bodyaScore= max(bodyaScore, curBodyaScore+ (a[pb])* (k-i));
            pb= p[pb];
            
            curSashaScore += a[ps]; 
            visS[ps]=true;
            sashaScore= max(sashaScore, curSashaScore+ (a[ps])* (k-i));
            ps= p[ps];
            
            if(visB[pb] && visS[ps]) break;
        }

        if(bodyaScore>sashaScore) cout<<"Bodya"<<endl;
        else if(bodyaScore== sashaScore) cout<<"Draw"<<endl;
        else cout<<"Sasha"<<endl;

    
    }
}



