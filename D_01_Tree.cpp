#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        unordered_map<int, unordered_set<int>> neighbours;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if(n==1){
            if(a[0]==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        
        neighbours[a[0]].insert(a[1]);
        neighbours[a[n-1]].insert(a[n-2]);
        for (int i = 1; i+1 < n; i++) {
            neighbours[a[i]].insert(a[i-1]);
            neighbours[a[i]].insert(a[i+1]);
        }

        unordered_map<int, int> freq1,freq2;
        freq1[0]=1;
        int totalFreq1=1, totalFreq2=0;
        while(2*totalFreq1<n){
            for(auto u: freq1){
                freq2[u.first]+= u.second;
                freq2[u.first+1]+= u.second;
                totalFreq2+= 2*(u.second);
            }
            swap(totalFreq1, totalFreq2);
            swap(freq2, freq1);
            totalFreq2=0;
            freq2.clear();
        }
        
        //cout<<(totalFreq1)<<endl;;
        
        unordered_map<int, int> freq3(freq1.begin(), freq2.end());
        bool poss=true;
        for(int i=0;i<n && poss;i++){
            if(freq1.find(a[i])!=freq1.end() && freq1[a[i]] !=0) {
                freq1[a[i]]--;
                if(freq1[a[i]]==0) freq1.erase(a[i]);
            }else if(freq3.find(a[i]-1)!=freq3.end() && freq3[a[i]-1] !=0 && neighbours[a[i]].count(a[i]-1)){
                    freq3[a[i]-1]--;
            }else poss= false;
        }
        
        if(poss && freq1.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

