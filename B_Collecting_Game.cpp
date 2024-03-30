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
        map<LL, vector<LL>> nums;
        for(LL i=0;i<n;i++) {
            LL u;
            cin>>u;
            nums[u].push_back(i);
        }

        LL noElem=0;
        vector<LL> res(n, 0);
        
        for(auto u: nums){
            for(auto v: u.second){
                res[v]= noElem+  u.second.size()-1;
            }
            noElem+= u.second.size();
        }
        LL sum= 0;
        noElem= 0;
        queue<LL> que;
        for(auto u: nums){
            if(sum!=0 && sum <u.first){
                que.push(noElem);
            }
            sum+= u.first * u.second.size();
            noElem+= u.second.size();
        }
        que.push(noElem);
        noElem= 0;
        for(auto u: nums){
            noElem+= u.second.size();
            
            for(auto v: u.second){
                if(!que.empty() && que.front()<= noElem) {
                    que.pop();
                    break;
                }else if(!que.empty()){
                    res[v]+= que.front() -noElem;
                }
            }
        }

        
        for(auto u: res)  cout<<u<<" ";
        cout<<endl;


    
    }
}



