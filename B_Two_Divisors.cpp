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
 
 
set<LL> primeFactors(LL n) 
{ 
    set<LL> res;
    while (n % 2 == 0) { 
        res.insert(2);
        n = n/2; 
    } 
 
    for (LL i = 3; i *i <= n; i = i + 2) { 
        while (n % i == 0) 
        { 
            res.insert(i);
            n = n/i; 
        } 
    } 
    
    if (n > 2) 
        res.insert(n);
        
    return res;
} 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
 
        LL a, b;
        cin>>a>>b;
        //DEB2(a,b);
        set<LL> apl,bpl;
        bpl= primeFactors(b);
        apl= primeFactors(a);
        apl.insert(bpl.begin(),bpl.end());
        bool found= false;
        for(auto w: apl){
            LL c= b*w;
            if(c%a==0){
                cout<<c<<endl;
                found= true;
            }
            if(found) break;
        }    
    }
}
 