#include <bits/stdc++.h>
using namespace std;

int match_length(const string& a, const string& b) {
    int len = 0;
    for (int i = 7; i >= 0; i--) {
        if (a[i] == b[i]) {
            len++;
        } else {
            break;
        }
    }
    return len;
}

int main() {
    string sp;
    while (cin >> sp) {
        vector<string> fp(3);
        for (int i = 0; i < 3; i++) {
            cin >> fp[i];
        }
        
        int n;
        cin >> n;
        
        long long total_prize = 0;
        vector<int> counts(7, 0);
        long long prize_amounts[] = {2000000, 200000, 40000, 10000, 4000, 1000, 200};
        
        for (int i = 0; i < n; i++) {
            string r;
            cin >> r;
            
            if (r == sp) {
                counts[0]++;
                total_prize += prize_amounts[0];
                continue;
            }
            
            int max_match = 0;
            for (int j = 0; j < 3; j++) {
                max_match = max(max_match, match_length(r, fp[j]));
            }
            
            if (max_match >= 3) {
                int idx = 8 - max_match + 1;
                counts[idx]++;
                total_prize += prize_amounts[idx];
            }
        }
        
        for (int i = 0; i < 7; i++) {
            cout << counts[i] << (i == 6 ? "" : " ");
        }
        cout << "\n" << total_prize << "\n";
    }
    return 0;
}