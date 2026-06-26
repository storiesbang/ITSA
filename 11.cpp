#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    while (cin >> rows >> cols) {            
        vector<vector<int>> a(rows, vector<int>(cols));
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> a[i][j];

        for (int j = 0; j < cols; j++) {        
            for (int i = 0; i < rows; i++) {    
                cout << a[i][j];
                if (i < rows - 1) cout << " ";  
            }
            cout << "\n";
        }
    }
    return 0;
}