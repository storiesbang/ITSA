#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a1, a2, a3;
    scanf("%d,%d,%d,%d", &N, &a1, &a2, &a3);   
    int cost = a1 * 15 + a2 * 20 + a3 * 30;    

    if (N < cost) {                           
        printf("0\n");
        return 0;
    }

    int change = N - cost;                     

    int c50 = change / 50;  change %= 50;     
    int c5  = change / 5;   change %= 5;
    int c1  = change;                          

    printf("%d,%d,%d\n", c1, c5, c50);         
    return 0;
}