#include <bits/stdc++.h>
using namespace std;

double calc(int kwh, double rate[]) {
    int tiers[4] = {120, 330, 500, 700};   
    double total = 0;
    int prev = 0;                           

    for (int i = 0; i < 4; i++) {
        if (kwh > tiers[i]) {               
            total += (tiers[i] - prev) * rate[i];   
            prev = tiers[i];
        } else {                            
            total += (kwh - prev) * rate[i];
            return total;                   
        }
    }
    total += (kwh - prev) * rate[4];
    return total;
}

int main() {
    int kwh;
    cin >> kwh;

    double summer[5]    = {2.10, 3.02, 4.39, 4.97, 5.63};
    double nonSummer[5] = {2.10, 2.68, 3.61, 4.01, 4.50};

    cout << fixed << setprecision(2);
    cout << "Summer months:" << calc(kwh, summer) << "\n";
    cout << "Non-Summer months:" << calc(kwh, nonSummer) << "\n";
    return 0;
}