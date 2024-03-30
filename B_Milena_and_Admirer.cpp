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
        LL a[n];
        for(LL i=0;i<n;i++) cin>>a[i];

        LL steps= 0;
        for(LL i =n-1; i>0; i--){
            //DEB(a[i]);
            if(a[i]<a[i-1]){
                LL parts= a[i-1]/a[i];
                steps+= parts;
                if( a[i-1]%a[i]== 0) steps--;
                else parts++;
                //DEB2(a[i-1], a[i]);
                a[i-1]= a[i-1]/parts;
                
                // a[i-1]%=a[i];
            }
        }

        cout<<steps<<endl;
    
    }
}



