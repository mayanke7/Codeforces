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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        LL lr[n] ,rl[n];
        lr[0]=rl[n-1]=0;
        
        for(int i=1;i<n;i++){
            if(i-1==0 || abs(arr[i-1]-arr[i]) < abs(arr[i-1]-arr[i-2]))
                lr[i]= lr[i-1]+1;
            else lr[i]= lr[i-1]+ abs(arr[i-1]-arr[i]);
        }

        for(int i=n-2;i>=0;i--){
            if(i+1==n-1 || abs(arr[i+1]-arr[i]) < abs(arr[i+1]-arr[i+2]))
                rl[i]= rl[i+1]+1;
            else rl[i]= rl[i+1]+ abs(arr[i+1]-arr[i]);
        }

        int m;
        cin>>m;

        while(m--){
            int p,q;
            cin>>p>>q;
            LL coins= 0;
            if(p>q) 
                cout<<rl[q-1]-rl[p-1]<<endl;
            else             
                cout<<lr[q-1]-lr[p-1]<<endl;
            
        }
    
    }
}



