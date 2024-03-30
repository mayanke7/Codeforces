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
        string str;
        cin>>n>>str;

        int ones=0,zeros=0;
        for(auto u: str) if(u=='1') ones++;
        else zeros++;
        if(ones&1 || zeros&1){
            cout<<"NO"<<endl;
            continue;
        }
        ones/=2;

        string first="", second= "";
        stack<int> st1, st2;
        bool poss=true;
        for(auto u: str){
            if(u=='1'){
                if(st1.size()==0 || st2.size()==0){
                    first+="(";
                    second+= "(";
                    st1.push(1);
                    st2.push(1);
                    ones--;
                }else{
                    if(ones>0){
                        first+="(";
                        second+= "(";
                        st1.push(1);
                        st2.push(1);
                        ones--;
                    }else{
                        first+=")";
                        second+= ")";
                        st1.pop();
                        st2.pop();
                    }
                }
            }else{
                if(st1.size()==0 && st2.size()==0){
                    poss= false;
                    break;
                }else if(st1.size()== st2.size()){
                    first+=")";
                    second+= "(";
                    st1.pop();
                    st2.push(1);
                }else{
                    if(st1.size()> st2.size()){
                        first+=")";
                        second+= "(";
                        st1.pop();
                        st2.push(1);
                    }else{
                        first+="(";
                        second+= ")";
                        st1.push(1);
                        st2.pop();
                    }
                    
                }

            }
        }
        //DEB2(first, second);

        if(poss && st1.empty() && st2.empty())
            cout<<"YES"<<endl<<first<<endl<<second<<endl;
        else cout<<"NO"<<endl;
    
    }
}



