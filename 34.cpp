#include <bits/stdc++.h>
using namespace std;

int main() {
    double height;
    int gender;

    cout << fixed << setprecision(1);       

    while (cin >> height >> gender) {        
        double weight;
        if (gender == 1)
            weight = (height - 80) * 0.7;    
        else
            weight = (height - 70) * 0.6;   

        cout << weight << "\n";
    }
    return 0;
}