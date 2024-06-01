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


vector<int> getPrimeNumList(){
    vector<bool> isPrime(1000009, true);
    vector<int> res;
    for(int i = 2; i*i <= 1000006; i++){
        if(isPrime[i]){
            res.push_back(i);
            for(long long p = static_cast<long long>(i)*i; p <= 1000006; p += i){
                isPrime[p] = false;
            }
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> primeList = getPrimeNumList();
    LL t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        map<int, int> powers;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            for(auto c: primeList){
                if(c>arr[i]) break;
                while(arr[i]%c==0){
                    arr[i]/=c;
                    powers[c]++;
                }
            }
            if(arr[i]> 1){
                powers[arr[i]]++;
            }
        }

        bool res= true;
        for(auto u: powers){
            if(u.second % n !=0) {
                res= false;
                break;
            }
        }

        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    
    }
}



