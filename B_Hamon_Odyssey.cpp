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
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];


        int p =a[0];
        for(int i=1;i<n;i++) p&=a[i];

        if(p==0){
            int res=0;
            int currentNum= a[0];

            if(currentNum==0){
                currentNum= -1;
                res++;
            }
            for(int i=1;i<n;i++){
                if(currentNum==-1)
                    currentNum= a[i];
                else
                    currentNum&= a[i];

                if(currentNum==0){
                    currentNum= -1;
                    res++;
                }
                
            }
            cout<<res<<endl;
        }else cout<<1<<endl;
    
    }
}



