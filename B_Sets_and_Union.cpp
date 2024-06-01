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

int affectingNums(vector<int> freq, vector<int>& arr){
    int affectingNum=0;
    for(auto c: arr){
        freq[c]--;
        if(freq[c]==0) affectingNum++;
    }
    return affectingNum;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        set<int> allPresentNums;
        map<int, set<int>> dictIndexes;
        for(int i=0;i<n;i++){
            int k; cin>>k;
            int w;
            while(k--){
                cin>>w;
                arr[i].push_back(w);
                dictIndexes[w].insert(i);
                allPresentNums.insert(w);
            }
        }
        int res=0;
        

        for(int i=1;i<=50;i++){
            if(!allPresentNums.count(i)) continue;
            set<int> curSet;
            for(int p=0;p<n;p++){
                if(!dictIndexes[i].count(p)){
                    for(auto c: arr[p]){
                        //cout<<c<<" ";
                        curSet.insert(c);
                    }
                }

            }
            res= max(res, static_cast<int>(curSet.size()));
            //cout<<endl;
        }
        
        cout<<res<<endl;
    
    }
}



