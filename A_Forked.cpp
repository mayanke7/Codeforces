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
        LL a, b;
        cin>>a>>b;

        vector<pair<LL, LL>> moves= {{a,b}, {-a, b}, {a,-b}, {-a, -b}};
        LL k1, k2;
        cin>>k1>>k2;
        LL q1, q2;
        cin>>q1>>q2;

        int res= 0;
        map<int, unordered_set<int>> hash, points;
        for(auto u: moves){
            int posx= k1+ u.first;
            int posy= k2+ u.second;
            // DEB2(posx, posy);
            hash[posx].insert(posy);

            posx= k1+ u.second;
            posy= k2+ u.first;
            // DEB2(posx, posy);
            hash[posx].insert(posy);
        }

        for(auto u: moves){
            int posx= q1+ u.first;
            int posy= q2+ u.second;
            // DEB2(posx, posy);
            if(hash.find(posx) !=hash.end() && hash[posx].find(posy)!= hash[posx].end() 
            && (!(points.find(posx) !=points.end() && points[posx].find(posy)!= points[posx].end()))) {
                res++;
                points[posx].insert(posy);

            }
            posx= q1+ u.second;
            posy= q2+ u.first;
            //DEB2(posx, posy);
            if(hash.find(posx) !=hash.end() && hash[posx].find(posy)!= hash[posx].end() 
            && (!(points.find(posx) !=points.end() && points[posx].find(posy)!= points[posx].end()))) {
                res++;
                points[posx].insert(posy);

            }
        }

        cout<<res<<endl;



    
    }
}



