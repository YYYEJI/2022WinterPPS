// Backjoon 2455 - 지능형 기차
#include <iostream>
using namespace std;

int main() {
    int get_off[4];
    int get_in[4];
    cin >> get_off[0] >> get_in[0] >> get_off[1] >> get_in[1] >> get_off[2] >> get_in[2] >> get_off[3] >> get_in[3];

    int people[4];

    for(int i = 0; i<4; i++) {
        if (i == 0) people[0] = get_in[0];

        people[i] = people[i-1] - get_off[i] + get_in[i];
    }

    int max_number = people[0];

    for(int i = 0; i<4; i++) {
        max_number = max_number > people[i] ? max_number : people[i];
    }
     
    cout << max_number;
}