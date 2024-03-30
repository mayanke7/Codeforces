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
        set<int> nums;
        int maxElem= INT_MIN;
        LL steps=0;
        int p=0;
        bool allMax=false;

        for(int i=0;i<n;i++) {
            cin>>arr[i];
            maxElem= max(maxElem, arr[i]);
            nums.insert(arr[i]);
        }
        
        while(arr[p]==maxElem) p++;

        if(p==n) {
            allMax= true;
            p--;
            steps= 1;
        }

        int commonGcd= maxElem-arr[p];
        
        for(int i=0;i<n && !allMax && commonGcd!=1 ;i++) {
            int diff= maxElem-arr[i];
            if(diff!=0)
                commonGcd= __gcd(commonGcd, diff);
        }
        // DEB2(allMax, commonGcd);
        for(int i=0;i<n && !allMax ;i++) {
            // DEB2(maxElem- arr[i], commonGcd);
            steps+= ((maxElem- arr[i])/commonGcd);
            // DEB(steps);
        }

        for(int i=0;i<=n && !allMax ;i++){
            if(nums.count(maxElem- commonGcd)){
                maxElem-=commonGcd;
                steps++;
            }else{
                steps++;
                break;
            }

        }

        cout<<steps<<endl;



    
    
    }
}



