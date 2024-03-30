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

bool passwordPoss(unordered_map<char, set<int>>& M, int dictInd, int i, int s, string& l, string& r, bool resYet){
    if(i==s && !resYet) return true;
	else if(i==s) return false;
    
    for(int w=l[i]; w<=r[i]; w++){
		if(!resYet)	return passwordPoss(M, dictInd, i+1, s, l, r, false);
		
        char t= static_cast<char>(w);
        //cout<<"t->"<<t<<endl;
        auto it= M[t].lower_bound(dictInd);
        if(it!=M[t].end()){
            int ind= *it;
            //cout<<"ind->"<<ind<<endl;
            if(passwordPoss(M, ind+1, i+1, s, l, r, true)) return true;
        }else{ 
            if(passwordPoss(M, dictInd, i+1, s, l, r,false)) return true;
            else return false;
        }
   
    }
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        string dict;
        cin>>dict;
        int passLength;
        cin>>passLength;
        string l; cin>>l;
        string r; cin>>r;
        unordered_map<char, set<int>> M;
        for(int i=0;i<dict.size();i++) M[dict[i]].insert(i);
        
        bool res= passwordPoss(M, 0, 0, passLength, l, r, true);
        
        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


