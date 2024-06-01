



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
        
        vector<int> inDegree(n,0);

        for(LL i=0; i<m; i++){
            LL v,u; cin>>v>>u;
            v--; u--;
            inDegree[v]++; inDegree[u]++;
        }
       map<LL,LL> inDegFreq;
        for(int i=0;i<n;i++){
            inDegFreq[inDegree[i]]++;
        }
        LL a,b;
        if(inDegFreq.size()>2){
            for(auto pr: inDegFreq){
                if(pr.first==1) continue;
                else if(pr.second==1){
                    a= pr.first;
                }else{
                    b=pr.first;
                }
            }
        }else{
            for(auto pr: inDegFreq){
                if(pr.first==1) continue;
                else{
                    a= pr.first;
                    b= pr.first;
                    break;
                }
            }
        }

        cout<<a<<" "<<--b<<endl;

    
    }
}



