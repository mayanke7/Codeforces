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
        LL n;
        cin>>n;
        LL a[n];
        LL b[n];
        for(LL i =0;i<n;i++) cin>>a[i];
        for(LL i =0;i<n;i++) cin>>b[i];

        multiset<PLL> points;
        //1 -> rlst
        //2 -> rlend
        //3 -> lrst
        //4 -> lrend

        LL res=0;
        
        for(LL i =0;i<n;i++) {
            if(a[i]<b[i])   {
                points.insert({a[i], 3});
                points.insert({b[i], 4});
            }else {
                points.insert({a[i], 1});
                points.insert({b[i], 2});
            }
        }
        LL lrStartedButNotEnded=0;
        LL rlEndedNotStarted=0;
        for(auto p: points){
            if(p.second ==1) {
                //rlst
                rlEndedNotStarted--;
            }else if(p.second== 3){
                //lrst
                lrStartedButNotEnded++;
            }else if(p.second==2){
                //rlend
                res+= lrStartedButNotEnded;
                res+= rlEndedNotStarted;
                rlEndedNotStarted++;
            }else{
                //lrend
                res+= rlEndedNotStarted;
                res+= lrStartedButNotEnded;
                lrStartedButNotEnded--;
            }
        }
        cout<<res<<endl;



        


        

    
    }
}



