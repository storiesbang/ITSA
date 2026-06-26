#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        stringstream ss(line);
        int num;
        int n = 0;
        map<int, int> counts;
        
        while (ss >> num) {
            counts[num]++;
            n++;
        }
        
        if (n == 0) continue;
        
        bool found = false;
        for (auto const& p : counts) {
            if (p.second > n / 2) {
                cout << p.first << "\n";
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}