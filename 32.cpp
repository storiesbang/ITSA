#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, shift_str;
    while (getline(cin, s) && getline(cin, shift_str)) {
        int shift = stoi(shift_str);
        for (char &c : s) {
            if (islower(c)) {
                c = (c - 'a' + shift % 26 + 26) % 26 + 'a';
            } else if (isupper(c)) {
                c = (c - 'A' + shift % 26 + 26) % 26 + 'A';
            } else if (isdigit(c)) {
                c = (c - '0' + shift % 10 + 10) % 10 + '0';
            }
        }
        cout << s << "\n";
    }
    return 0;
}