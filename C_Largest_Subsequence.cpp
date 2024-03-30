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
        string str;
        cin>>str;
        
        priority_queue<char, vector<char>, greater<char>> pq;
        priority_queue<int, vector<int>, greater<int>> index;
        set<char> s;
        int w= -1;
        char lastC='-1';
        int freq= 0;
        for(int i=n-1;i>=0;i--){
            if(str[i]-'a'>=w){
                w= str[i]-'a';
                if(str[i]==lastC) freq++;
                else freq=1;
                lastC= str[i];
                pq.push(str[i]);
                index.push(i);
                s.insert(str[i]);
            }
        }
        //DEB(freq);
        int res=pq.size()-1 - (freq-1);

        while(!pq.empty()){
            //DEB(pq.top());
            str[index.top()]= pq.top();
            pq.pop();
            index.pop();
        }

        string newStr= str;
        sort(newStr.begin(), newStr.end());

        if(newStr !=str) cout<<-1<<endl;
        else cout<<res<<endl;
    
    }
}



