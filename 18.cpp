#include <bits/stdc++.h>
using namespace std;

int main() {
    string keys[8] = {
        "`1234567890-=",
        "qwertyuiop[]\\",
        "asdfghjkl;'",
        "zxcvbnm,./",
        "~!@#$%^&*()_+",
        "{}|",
        ":\"",
        "<>?"
    };

    string line;
    while (getline(cin, line)) {
        for (char c : line) {
            char search_c = c;
            if (isupper(c)) {
                search_c = tolower(c);
            }
            bool found = false;
            for (int i = 0; i < 8; ++i) {
                size_t pos = keys[i].find(search_c);
                if (pos != string::npos) {
                    if (pos + 1 < keys[i].length()) {
                        cout << keys[i][pos + 1];
                    } else {
                        cout << c;
                    }
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << c;
            }
        }
        cout << "\n";
    }
    return 0;
}