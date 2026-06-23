#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    getline(cin, line);                

    stringstream ss(line);
    string word;
    set<string> seen;                   
    vector<string> result;              

    while (ss >> word) {                
        for (char& c : word){
            c = tolower(c);
        }            

        if (seen.find(word) == seen.end()) {  
            seen.insert(word);          
            result.push_back(word);     
        }
    }

    for (int i = 0; i < (int)result.size(); i++) {
        cout << result[i];
        if (i < (int)result.size() - 1) cout << " ";
    }
    cout << "\n";                       
    return 0;
}