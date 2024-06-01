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
        int res=1;
        int downPath= 0;
        bool allDown=false;

        string str0,str1;
        cin>>str0>>str1;

        cout<<str0[0];
        
        for(int i=1;i<n;i++){
            if(allDown) {
                cout<<str1[i-1];
                continue;
            }
            if(str0[i]==str1[i-1]){
                cout<<str0[i];
                downPath++;
            }else if(str0[i]>str1[i-1]){
                cout<<str1[i-1];
                res+= downPath;
                downPath=0;
                allDown=true;
            }else{
                cout<<str0[i];
                downPath=0;
            }
            
        }
        res+= downPath;
        cout<<str1[n-1]<<endl;


        cout<<res<<endl;

    
    }
}



