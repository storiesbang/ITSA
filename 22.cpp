#include <bits/stdc++.h>
using namespace std;

int main() {
    int g[3][3];
    while (cin >> g[0][0]) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (i == 0 && j == 0) continue;
                cin >> g[i][j];
            }
        }
        
        bool win = false;
        for (int i = 0; i < 3; ++i) {
            if (g[i][0] == g[i][1] && g[i][1] == g[i][2]) win = true;
            if (g[0][i] == g[1][i] && g[1][i] == g[2][i]) win = true;
        }
        if (g[0][0] == g[1][1] && g[1][1] == g[2][2]) win = true;
        if (g[0][2] == g[1][1] && g[1][1] == g[2][0]) win = true;
        
        if (win) {
            cout << "True\n";
        } else {
            cout << "False\n";
        }
    }
    return 0;
}