#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int s[3];
        cin >> s[0] >> s[1] >> s[2];
        int fail = 0, sum = 0, passScore = 0;
        for (int i = 0; i < 3; i++) {
            sum += s[i];
            if (s[i] < 60) fail++;
            else passScore = s[i];
        }
        char ans;
        if (fail == 0) {
            ans = 'P';
        } else if (fail == 1) {
            ans = (sum >= 220) ? 'P' : 'M';   
        } else if (fail == 2) {
            ans = (passScore >= 80) ? 'M' : 'F';
        } else {
            ans = 'F';
        }
        cout << ans << "\n";
    }
    return 0;
}