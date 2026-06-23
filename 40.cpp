#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> d;
    string token;

    while (cin >> token) {              
        if (token == "X" || token == "x")
            d.push_back(10);            
        else
            d.push_back(stoi(token));
    }

    for (int i = 1; i < (int)d.size(); i++)
        d[i] += d[i - 1];

    for (int i = 1; i < (int)d.size(); i++)
        d[i] += d[i - 1];

    int check = d.back();              

    cout << (check % 11 == 0 ? "YES" : "NO") << "\n";
    return 0;
}