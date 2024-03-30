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
    vector<int> powers(30);
    powers[0]=1;
    for(int i=1;i<30;i++) powers[i]= 2 * powers[i-1];
    LL t;
    cin>>t;
    map<int, int> freq;
    while(t--){
        int operation, value;
        cin>>operation>>value;

        if(operation==1){
            freq[value]++;
        }else{

            for(auto itr= freq.rbegin(); value && itr!=freq.rend(); itr++){
                int div= min(itr->second, value/powers[itr->first]);
                value-= div * powers[itr->first];
            }



            if(!value) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    
    }
}



