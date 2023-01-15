// Backjoon 11653 - 소인수분해
#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n == 1) return 0;
 
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << endl;
            n /= i;
        }
    }
 
}