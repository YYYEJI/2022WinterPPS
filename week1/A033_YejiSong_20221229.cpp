// Backjoon 2953 - 나는 요리사다
#include <iostream>
using namespace std;

int main() {
    int x, sum;
    int max_score = 0;
    int winner;

    for(int i = 0; i<5; i++) {
        sum = 0;
        for(int j = 0; j<4; j++) {
            cin >> x;
            sum += x;
        }
        if(sum > max_score) {
            winner = i+1;
            max_score = sum;
        }
    }

    cout<<winner<<" "<<max_score;
}