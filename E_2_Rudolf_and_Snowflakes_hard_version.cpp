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


bool isInteger(double value) {
    return std::trunc(value) == value;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;

    LL k=2;
    unordered_set<LL> us;
    LL p = LLONG_MAX;
    bool st= false;
    while((1+k+k*k)<=p){
        us.insert(1+k+k*k);
        LL prev= k*k;
        LL total= 1+k+k*k;
        while(total <= p){
            prev*=k;
            total+= prev;
            if(total>0) us.insert(total);
            else break;
        }
        k++;
    }
    while(t--){
        
        
        LL n;
        cin>> n;
        

        if(us.find(n)!=us.end()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    
    }
}



