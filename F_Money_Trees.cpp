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
        LL n,k; cin>>n>>k;
        vector<LL> a(n),h(n);
        for(LL i=0;i<n;i++) cin>>a[i];
        for(LL i=0;i<n;i++) cin>>h[i];
        LL maxLength=0;
        LL i=0;
        while(i<n){
            LL totalFruit=a[i];
            LL st=i;
            LL curLength=0;
            if(totalFruit>k) {st++; totalFruit=0;}
            else curLength++;
            maxLength= max(curLength, maxLength);
            LL p= i+1;
            while(p<n && h[p-1]%h[p]==0){
                totalFruit+= a[p];
                curLength++;
                while(totalFruit>k && st<=p){
                    curLength--;
                    totalFruit-= a[st];
                    st++;
                }
                maxLength= max(curLength, maxLength);
                p++;
            }
            i=p;

        }
        cout<<maxLength<<endl;

    
    }
}



