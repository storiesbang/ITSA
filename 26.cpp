#include <bits/stdc++.h>
using namespace std;

int getDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool compare(int a, int b) {
    int sumA = getDigitSum(a);
    int sumB = getDigitSum(b);
    if (sumA != sumB) {
        return sumA < sumB;
    }
    return a < b;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        
        sort(nums.begin(), nums.end(), compare);
        
        for (int i = 0; i < n; ++i) {
            cout << nums[i];
            if (i < n - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}