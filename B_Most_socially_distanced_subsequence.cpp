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

int abs(int a,int b){
    return a>b?a-b:b-a;
}
 int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int prev = arr[0];
        for (int i = 1; i < n - 1; i++) {
            if (abs(arr[i + 1], prev) >= abs(prev, arr[i]) + abs(arr[i], arr[i + 1])) {
                arr[i] = -1;
            } else {
                prev = arr[i];
            }
        }

        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (arr[i] != -1) {
                res.push_back(arr[i]);
            }
        }

        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

}

