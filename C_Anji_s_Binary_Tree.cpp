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


LL minChanges=INT_MAX;

void dfs(vector<pair<LL, LL>>& tree, string& dir, LL node, LL changes){
    //   DEB(node);
    if(tree[node-1].first==0 && tree[node-1].second==0){
        minChanges= min(minChanges, changes);
        return;
    }

    LL leftChanges= changes, rightChanges= changes;
    if(dir[node-1]!='L') leftChanges++;
    if(dir[node-1]!='R') rightChanges++;

  
    // DEB2(leftChanges, rightChanges);
    // DEB2(tree[node-1].first, tree[node-1].second);
    if(tree[node-1].first!=0 )
        dfs(tree, dir, tree[node-1].first, leftChanges);
    
    if(tree[node-1].second!=0 )
        dfs(tree, dir, tree[node-1].second, rightChanges);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        LL n;
        cin>>n;
        minChanges=INT_MAX;
        
        string dir; cin>>dir;

        vector<pair<LL, LL>> tree;

        for(LL i=0;i<n;i++){
            LL a,b;cin>>a>>b;
            tree.push_back({a,b});
            // DEB2(a,b);
        }

        dfs(tree, dir, 1, 0);


        cout<<minChanges<<endl;



    }
}



