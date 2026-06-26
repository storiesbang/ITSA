#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> count(25, 0);
        int max_buses = 0;
        
        for (int i = 0; i < n; ++i) {
            int s, d;
            cin >> s >> d;
            for (int j = s; j < d; ++j) {
                count[j]++;
                if (count[j] > max_buses) {
                    max_buses = count[j];
                }
            }
        }
        
        cout << max_buses << "\n";
    }
    return 0;
}