#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    while (cin >> s1 >> s2) {
        int count = 0;
        int n1 = s1.length();
        int n2 = s2.length();
        
        if (n1 <= n2) {
            for (int i = 0; i <= n2 - n1; ++i) {
                if (s2.substr(i, n1) == s1) {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}