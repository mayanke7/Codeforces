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
        bool notPoss= false;
        string str; cin>>str;
        deque<int> dq;
        for(auto c: str){
            dq.push_back(c-'0');
        }
        if(dq.size() & 1) notPoss=true;
        vector<int> operations;
        int p=0;

        while(!dq.empty() && !notPoss && operations.size()<=300){
            // DEB2(dq.front(), dq.back());
            if(dq.front()== dq.back()){
                if(dq.front()==1){
                    operations.push_back(p);
                    dq.pop_back();
                    dq.push_front(1);

                }else{
                    operations.push_back(p+ dq.size());
                    dq.pop_front();
                    dq.push_back(0);
                }
            }else{
                dq.pop_back();
                dq.pop_front();
            }
            p++;
            // DEB(p);
        }
        // DEB(operations.size());
       

        if(operations.size()>300)
            notPoss=true;


        if(!notPoss){
            cout<<operations.size()<<endl;
            for(auto c: operations) cout<<c<<" ";
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
}



