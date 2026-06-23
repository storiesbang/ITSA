#include <bits/stdc++.h>
using namespace std;

struct Card {
    char suit;      
    int num;        
    string raw;     
};

int suitRank(char s) {
    if (s == 'S') return 4;
    if (s == 'H') return 3;
    if (s == 'D') return 2;
    return 1;       
}

bool cmp(const Card& a, const Card& b) {
    if (a.suit != b.suit)
        return suitRank(a.suit) > suitRank(b.suit);  
    return a.num > b.num;                             
}

int main() {
    int n;
    cin >> n;
    cin.ignore();                       

    while (n--) {
        string line;
        getline(cin, line);             
        stringstream ss(line);
        string token;
        vector<Card> deck;

        while (ss >> token) {           
            Card c;
            c.suit = token[0];          
            c.num = stoi(token.substr(1));  
            c.raw = token;
            deck.push_back(c);
        }

        sort(deck.begin(), deck.end(), cmp);   // 排序

        for (int i = 0; i < (int)deck.size(); i++) {
            cout << deck[i].raw;
            if (i < (int)deck.size() - 1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}