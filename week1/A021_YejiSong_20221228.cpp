// Backjoon 2010 - 플러그
#include <iostream>
using namespace std;

int main() {
    int num, n;
    int sum = 0;

    cin >> num;

    for(int i = 0; i<num; i++) {
        cin >> n;
        sum += n;
    }

    cout << sum-num+1;
}