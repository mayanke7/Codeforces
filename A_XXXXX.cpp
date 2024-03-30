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
        int n,x;
        cin>>n>>x;
        // DEB2(n,x);
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int index=-1;
        int res=0;
        if(arr[0]%x!=0){
            index=0;
            res=1;
        }
        // DEB(index);

        for(int i=1;i<n;i++){
            arr[i]+= arr[i-1];
            //DEB(arr[i]%x);
            if(arr[i]%x!=0) {
                res= i+1;
                if(index==-1) index=i;
                // DEB(index);
            }else if(index!=-1){
                res= max(res, i-index);
            }
            // DEB(index);
        }


        if(res==0) cout<<-1<<endl;
        else cout<<res<<endl;
    
    }
}



