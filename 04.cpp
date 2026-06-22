#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int total = (h2 - h1) * 60 + (m2 - m1);
    int money;
    if (total <= 120) {
        money = (total/30) * 30;
    }else if (total <= 240) {
        money = 120 + ((total - 120)/30) * 40;
    }else {
        money = 120 + 160 + ((total - 240)/30) * 60;
    }
    cout << money << endl;
    return 0;
}