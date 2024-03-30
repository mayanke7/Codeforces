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

bool check(string str1, string str2, int ix, int iy, int totalBlack, int n){
    int visitedCells=0;
    bool poss= true;
    while(poss){
        //cout<<ix<<" "<<iy<<endl;
        visitedCells++;
        if(visitedCells==totalBlack) break;
        if(ix==0) {
            str1[iy]='V';
            if(str2[iy]=='B') ix=1;
            else if(iy+1<n && str1[iy+1]=='B') iy++;
            else poss= false;
        }else {
            str2[iy]= 'V';
            if(str1[iy]=='B') ix=0;
            else if(iy+1<n && str2[iy+1]=='B') iy++;
            else poss= false;
        }

    }
    return poss;

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1>>str2;
        int ix, iy=0;
        int totalBlack=0;
        bool poss= true;
        for(auto c: str1){
            if(c=='B') totalBlack++;
        }

        for(auto c: str2){
            if(c=='B') totalBlack++;
        }

        if(str1[0]=='B' && str2[0]=='B') 
            poss= (check(str1, str2, 0, 0,totalBlack, n) || check(str1, str2, 1, 0,totalBlack, n));
        else if(str1[0]=='B') poss= check(str1, str2, 0, 0,totalBlack, n);
        else if(str2[0]=='B') poss= check(str1, str2, 1, 0,totalBlack, n);
        else poss= false;
        

        if(poss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
}



