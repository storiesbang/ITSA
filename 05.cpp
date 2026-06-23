#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned char b = (unsigned char)n;   
    for (int i = 7; i >= 0; i--){
        cout << ((b >> i) & 1);
    }          
    return 0;
}