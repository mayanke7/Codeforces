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
        for(int i=0;i<n;i++) cin>>arr[i];

        sort(arr, arr+n);
        int moves= n/2 + n%2;

        unordered_set<int> us;
        bool alice= true;
        for(int i=0;i<n;i++){
            int freq=1;
            int p=i+1;
            while(p<n && arr[i]==arr[p]){
                freq++;
                p++;
            }
            i= p-1;
            if(freq==1){
                if(alice){
                    us.insert(arr[i]);
                    alice=false;
                }else{
                    arr[i]=-1;
                    alice= true;
                }
            } 
        }
        for(int i=0;i<n;i++){
            if(arr[i]==-1) continue;
            if(!us.count(arr[i])){
                if(alice){
                    us.insert(arr[i]);
                    alice=false;
                }else{
                    alice= true;
                }
            }
        }
        int res=INT_MAX;
        for(int i=0;i<INT_MAX;i++){
            if(!us.count(i)){
                res= i;
                break;
            }
        }

        cout<<res<<endl;


    
    }
}


//1 0 7 7 7 6 1 2 0
// 0 0 1 1 2 6 7 7 7

