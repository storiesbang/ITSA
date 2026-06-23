#include <bits/stdc++.h>
using namespace std;

long long f(int n) {
    if (n == 0 || n == 1) return n + 1;     
    return f(n - 1) + f(n / 2);            
}

int main() {
    int k;
    cin >> k;
    cout << f(k) << "\n";
    return 0;
}