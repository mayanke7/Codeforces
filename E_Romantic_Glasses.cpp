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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        set<LL> us1;
        bool poss= false;
        us1.insert(0);
        LL evenTotal=0, oddTotal=0;
        for(int i=0;i<n && !poss;i++){
            if(i&1) oddTotal+= a[i];
            else evenTotal+= a[i];
            //DEB2(evenTotal, oddTotal);
            if(us1.count(evenTotal-oddTotal)) poss= true;
            else us1.insert(evenTotal-oddTotal);
        }

        if(poss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
}



