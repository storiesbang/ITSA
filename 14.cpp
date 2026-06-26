#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        
        if (s == rev_s) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}