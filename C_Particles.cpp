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
        map<LL, int> chargeFreq;
        priority_queue<pair<LL, int>, vector<pair<LL, int>>, greater<pair<LL, int>>> minCharge;
        int n;
        cin>>n;
        vector<vector<int>> chain (n, vector<int>(2, -1));
        for(int i=0;i<n;i++){
            LL c;
            cin>>c;
            chargeFreq[c]++;
            minCharge.push({c, i});
            if(i!=0) chain[i][0]= i-1;
            if(i!=n-1) chain[i][1]= i+1;
        }
        LL res=0;
        while(!minCharge.empty()){
            int curChargeInd= minCharge.top().second;
            LL curCharge= minCharge.top().first;
            if(!chargeFreq.count(curCharge) || chargeFreq[curCharge]<1) continue;
            chargeFreq[curCharge]--;
            if(chain[curCharge][0]==-1 && chain[curCharge][1]==-1){
                res= curCharge;
                break;
            }

            if(chain[curCharge][0]!=-1)


        }
        cout<<res<<endl;
    
    }
}



