#include <bits/stdc++.h>
using namespace std;

int main() {
    string ans;
    while (cin >> ans && ans != "0" && ans != "0000") {
        string guess;
        while (cin >> guess && guess != "0" && guess != "0000") {
            int a = 0, b = 0;
            for (int i = 0; i < 4; ++i) {
                if (ans[i] == guess[i]) {
                    a++;
                } else {
                    for (int j = 0; j < 4; ++j) {
                        if (ans[i] == guess[j]) {
                            b++;
                        }
                    }
                }
            }
            cout << a << "A" << b << "B\n";
        }
    }
    return 0;
}