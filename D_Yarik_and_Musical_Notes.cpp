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
        LL res=0;
        map<LL, LL> freq;
        map<LL, LL> eqFreq;
        vector<LL> arr(n);
        for(LL i=0;i<n;i++) {
            cin>>arr[i];
            if((arr[i] & (arr[i]-1))==0){
                LL key= log2(arr[i]) - arr[i];
                res+= eqFreq[key];
                eqFreq[key]++;
            }else{
                if(freq.count(arr[i])){
                    res+= freq[arr[i]];
                }
                freq[arr[i]]++;
            }
        }
        cout<<res<<endl;
    
    }
}



