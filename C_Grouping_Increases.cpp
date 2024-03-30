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

int pentalty(unordered_map<string, int>& dp, vector<int>& a, int i, int n,int prev1, int prev2){
    if(i==n) return 0;
    
    if(prev1<prev2) swap(prev1, prev2);
    
    string str= to_string(i)+"-"+to_string(prev1)+"-"+to_string(prev2);
    if(dp.find(str)!=dp.end()) return dp[str];
    
    int pentalty1= prev1!=-1 && prev1 <a[i];

    pentalty1+= pentalty(dp, a, i+1, n, a[i], prev2);
  

    int pentalty2= prev2!=-1 && prev2 <a[i];
    
    pentalty2+= pentalty(dp, a, i+1, n, prev1, a[i]);
    
    dp[str]= min(pentalty1, pentalty2);
    return  min(pentalty1, pentalty2);

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        unordered_map<string, int> dp;

        cout<<pentalty(dp, a, 0, n,-1, -1)<<endl;


    
    }
}



