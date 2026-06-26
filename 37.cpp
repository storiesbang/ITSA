#include <bits/stdc++.h>
using namespace std;

int main() {
    int d[4];
    while (cin >> d[0] >> d[1] >> d[2] >> d[3]) {
        sort(d, d + 4);
        
        if (d[0] == d[3]) {
            cout << "WIN\n";
        } else if (d[0] == d[2] || d[1] == d[3]) {
            cout << "R\n";
        } else if (d[0] == d[1] && d[2] == d[3]) {
            cout << d[2] + d[3] << "\n";
        } else if (d[0] == d[1]) {
            cout << d[2] + d[3] << "\n";
        } else if (d[1] == d[2]) {
            cout << d[0] + d[3] << "\n";
        } else if (d[2] == d[3]) {
            cout << d[0] + d[1] << "\n";
        } else {
            cout << "R\n";
        }
    }
    return 0;
}