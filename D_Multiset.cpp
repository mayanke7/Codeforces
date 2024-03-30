#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    using LL = long long;
    LL n, q;
    cin >> n >> q;

    vector<int> elements;
    for (int i = 0; i < n; ++i) {
        int u;
        cin >> u;
        elements.push_back(u);
    }

    sort(elements.begin(), elements.end());

    while (q--) {
        int k;
        cin >> k;
        if (k < 0) {
            k *= -1;
            auto it = lower_bound(elements.begin(), elements.end(), k);
            cout<<*it<<endl;
            if (it != elements.end()) {
                elements.erase(it);
            }
        } else if (k > 0) {
            elements.insert(lower_bound(elements.begin(), elements.end(), k), k);
        }
    }

    if (elements.empty()) {
        cout << 0 << endl;
    } else {
        cout << elements.front() << endl;
    }

    return 0;
}
