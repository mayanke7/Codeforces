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

int countSteps(int curFreqNonMaxChar){
    // DEB(curFreqNonMaxChar);
    int res=0;
    while(curFreqNonMaxChar > 0){
        res++;
        curFreqNonMaxChar/=2;
    }
    return res;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        string str; cin>>str;
        map<char, int> freq;
         int ss= str.size();
        vector<char> charWithMaxFreq={str[0]};
        map<char, vector<int>> charIndexes;
        int maxFreq= 1;
        for(int i=0;i<ss;i++) {
            char c= str[i];
            charIndexes[c].push_back(i);
            freq[c]++;
            if(freq[c]> maxFreq){
                charWithMaxFreq= {c};
                maxFreq= freq[c];
            }else if(freq[c]== maxFreq){
                charWithMaxFreq.push_back(c);
            }
        }
       
        int res=INT_MAX;

        if(maxFreq >1){
            for(auto c: charWithMaxFreq){
                int curRes=0;
                int noOfOccurences= charIndexes[c].size();
                for(int i=0;i<noOfOccurences;i++){
                    if(i==0){
                        curRes= max(curRes, countSteps(charIndexes[c][i]-0));
                    }else{
                        curRes= max(curRes, countSteps(charIndexes[c][i]-charIndexes[c][i-1] -1));
                    }

                    if(i==noOfOccurences-1){
                        curRes= max(curRes, countSteps(ss -1 -charIndexes[c][i]));
                    }
                }
                res= min(curRes, res);
            }

        }else{
            res = countSteps(ss) -1;
        }
        cout<<res<<endl;

    
    }
}



