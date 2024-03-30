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
        int n,m;
        cin>>n>>m;
        vector<int> a(n), b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        LL res=0;
        int w= m-1, k=0;
        int q=n-1, r=0;

        int count=0;
        while(count<n){
            LL d1= abs(a[q]-b[w]);
            LL d2= abs(a[q]-b[k]);
            LL d3= abs(a[r]-b[w]);
            LL d4= abs(a[r]- b[k]);
            //DEB2(d1, d2);

            if(d1>=d2 && d1 >=d3 && d1>=d4){
                q--;
                w--;
                res+= d1;
            }else if(d2>=1 && d2>=d3 && d2>=d4){
                q--;
                k++;
                res+=d2;
            }else if(d3>=d1 && d3>=d2 && d3>=d4){
                r++;
                w--;
                res+=d3;
            }else{
                r++;
                k++;
                res+=d4;
            }
            count++;
        }
        cout<<res<<endl;
    }
}
