#include <bits/stdc++.h>
using namespace std;

int main() {
    long double r;
    int n, p;
    cin >> r >> n >> p;

    long double total = 0;                    
    for (int i = 0; i < n; i++) {
        total = (total + p) * (1 + r);   
    }

    cout << (unsigned long long)(total) << "\n";   
    return 0;
}