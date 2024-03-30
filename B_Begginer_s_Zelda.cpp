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
        int n;
        cin>>n;
        int p=n;
        p--;
        map<int, vector<int>> graph;
        while(p--){
            int v, u;
            cin>>v>>u;
            graph[v].push_back(u);
            graph[u].push_back(v);

        }
        unordered_set<int> vis;

        int res=0;

        if(graph.size()>1){
            auto u = graph.begin();
            int firstElem= u->first;

            stack<int> st, st2;
            st.push(firstElem);
            int y =0;
            while(!st.empty()){
                while(!st.empty()){
                    int cur= st.top();
                    DEB(cur);
                    st.pop();
                    vis.insert(cur);
                    int siz= 0;
                    for(auto u: graph[cur]){
                        if(vis.count(u)==0){
                            siz++;
                            st2.push(u);
                        }
                    }
                    DEB(siz);
                    if(siz>0){
                        if(cur!=firstElem) 
                         y+=siz;
                    }
                    

                }
               
              

                swap(st, st2);
            }
            if(y &1 ) res+= y/2 +1;
            else res+= y/2;
            DEB2(y, res);

        }

        cout<<res+1<<endl;
    
    }
}



