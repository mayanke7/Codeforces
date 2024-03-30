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
        cin>> n;
        int a[n];
        int prevDiffElement= -1;
        int prevDiffIndex[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(i==0) prevDiffIndex[0]= -1;
            else if(a[i]==a[i-1]) prevDiffIndex[i]= prevDiffIndex[i-1];
            else prevDiffIndex[i]= i-1;
        }

        int q; cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            if(l>=r || prevDiffIndex[r-1]< l-1)
                cout<<-1<<" "<<-1<<endl;
            else cout<<prevDiffIndex[r-1]+1<<" "<<r<<endl;
        }
        cout<<endl;


    
    }
}



