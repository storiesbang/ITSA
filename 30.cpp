#include <bits/stdc++.h>
using namespace std;

int main() {
    int limits[] = {0, 21, 19, 21, 21, 22, 22, 23, 24, 24, 24, 23, 22};
    string signs[] = {
        "Capricorn", "Aquarius", "Pisces", "Aries", 
        "Taurus", "Gemini", "Cancer", "Leo", 
        "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"
    };
    
    int m, d;
    while (cin >> m >> d) {
        if (d < limits[m]) {
            cout << signs[m - 1] << "\n";
        } else {
            cout << signs[m] << "\n";
        }
    }
    return 0;
}