#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        while (n--) {
            int T, m, k;
            cin >> T >> m >> k;
            
            vector<int> prices(k);
            for (int i = 0; i < k; ++i) {
                cin >> prices[i];
            }
            
            sort(prices.begin(), prices.end());
            
            int total_cost = 0;
            for (int i = 0; i < m; ++i) {
                total_cost += prices[i];
            }
            
            if (total_cost <= T) {
                cout << total_cost << "\n";
            } else {
                cout << "Impossible\n";
            }
        }
    }
    return 0;
}