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
const int MOD = 998244353;
#define PI 3.1415926535897932384626

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        string str; cin>>str;
        
        int i=0;
        int ss= str.size();
        uint64_t operations=0, seq=1;
        while(i<ss){
            int freq=1;
            int p=i+1;
            while(p<ss && str[i]==str[p]){
                freq++,p++;
            }

            if(freq>1){
                operations+= freq-1;
                seq *= (freq);
                seq%= MOD;
            }
            i=p;
        }
        int w= operations;
        while(w>1){
            seq *= (w);
            seq%= MOD;
            w--;
        }

        cout<<operations<<" "<<seq<<endl;

    
    }
}



