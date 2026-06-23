#include <bits/stdc++.h>
using namespace std;

int main() {
    string order = "ABCDEFGHJKLMNPQRSTUVXYWZIO";

    string id;
    cin >> id;

    int pos = order.find(id[0]);     
    int code = pos + 10;             
    int X1 = code / 10;              
    int X2 = code % 10;              

    int weight[9] = {8, 7, 6, 5, 4, 3, 2, 1, 1};

    int P = X1 + 9 * X2;
    for (int i = 0; i < 9; i++) {
        int digit = id[i + 1] - '0';   
        P += weight[i] * digit;
    }

    cout << (P % 10 == 0 ? "CORRECT!!!" : "WRONG!!!") << "\n";
    return 0;
}