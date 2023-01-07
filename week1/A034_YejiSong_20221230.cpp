// Backjoon 3052 - 나머지
#include <iostream>
using namespace std;

int main() {
    int mod[42] = {0,};
    int check = 0;
    int cnt = 0;
    int a;

    for(int i = 0; i<10; i++) {
        cin >> a;
        mod[a%42] = 1;
    }

    for(int i = 0; i<42; i++) {
        if(mod[i]==1) cnt++;
    }

    cout<<cnt;
}