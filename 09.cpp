#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n; cin >> n;
    int total = 0;
    for(int i=1;i<=n;i++){
        if(i%3 == 0){
            total +=i;
        }
    }
	cout << total;
	
	return 0;
}
