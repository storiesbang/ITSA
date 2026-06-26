#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        int counts[26] = {0};
        
        for (char c : s) {
            if (isalpha(c)) {
                counts[tolower(c) - 'a']++;
            }
        }
        
        for (char &c : s) {
            if (c == ',' || c == '.') {
                c = ' ';
            }
        }
        
        stringstream ss(s);
        string word;
        int word_count = 0;
        
        while (ss >> word) {
            word_count++;
        }
        
        cout << word_count << "\n";
        
        for (int i = 0; i < 26; i++) {
            if (counts[i] > 0) {
                cout << (char)('a' + i) << " : " << counts[i] << "\n";
            }
        }
    }
    return 0;
}