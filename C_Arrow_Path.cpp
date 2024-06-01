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

vector<vector<int>> step= {{0, -1}, {0 ,1}, {1, 0}, {-1, 0}};

void dfs(vector<vector<int>>& dp, string& s1, string& s2, int i, int j, int n){
    if(dp[i][j]>0) return;
    
    dp[i][j]= -2;
    for(auto v: step){
        int x= i+ v[0];
        int y= j+ v[1];
        
        if(x>=0 && x<2 && y>=0 && y<n){
            
            if(dp[x][y]==1){
                dp[i][j]= 1;
                return;
            }

            int yy= y;

            if(x==0){
                
                if(s1[y]=='<') yy--;
                else yy++;
                
            }else{
                
                if(s2[y]=='<') yy--;
                else yy++;
                
            }

            if(yy>=0 && yy<n){
                if(x==1 && yy==n-1){
                    dp[i][j]=1;
                    return;
                }
                //DEB2(x, yy);

                if(dp[x][yy]==-1){
                    dfs(dp, s1, s2, x, yy, n);
                }else if (dp[x][y]== -2) 
                    continue;
                dp[i][j]= dp[x][yy];
            }

            
        }

    }

    if(dp[i][j]<0) dp[i][j]=0;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        vector<vector<int>> dp(2, vector<int>(n,-1));
        dp[1][n-1]= 1;
        dfs(dp, s1, s2, 0, 0, n);

        if(dp[0][0]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    
    }
}



