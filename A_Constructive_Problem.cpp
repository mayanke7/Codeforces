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
        LL n; cin>>n;
        vector<LL> arr(n);
        map<LL, LL> freq;
        map<LL, vector<LL>> occurances;
        for(LL i=0;i<n;i++){
            cin>>arr[i];
            occurances[arr[i]].push_back(i);
            freq[arr[i]]++;
        }
        bool poss= true;
        LL mexArr= n;

        for(LL i=0;i<n;i++){
            if(!freq.count(i)){
                mexArr= i;
                break;
            }
        }

        if(mexArr>= n) poss= false;

        if(poss){
            if(occurances.count(mexArr+1)){
                auto occurMex= occurances[mexArr+1];
                if(occurMex.size()>1){
                    LL sizeOccurMex= occurMex.size();
                    LL left= occurMex[0];
                    LL right= occurMex[sizeOccurMex-1];
                    for(LL i=left; poss && i<=right; i++){
                        if(arr[i]<mexArr){
                            freq[arr[i]]--;
                            if(freq[arr[i]]==0) poss= false;
                        }
                    }
                }
            }
        }

        if(poss) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    
    }
}



