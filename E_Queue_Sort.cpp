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
        vector<int> arr(n);
        int minelement= INT_MAX;
        for(auto &c: arr) {
            cin>>c;
            minelement= min(c, minelement);
        }
        bool minelementFound=false;
        int steps=0;
        for(int i=0;i<n;i++){
            if(!minelementFound && arr[i]==minelement){
                minelementFound=true;
                continue;
            }

            if(minelementFound){
                if(arr[i]<arr[i-1]){
                    steps= -1;
                    break;
                }
            }else {
                steps++;
            }
        }

        cout<<steps<<endl;
    
    }
}



