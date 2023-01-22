// Backjoon 15729 - 방탈출
#include <iostream>
using namespace std;

int room[1000000];
int main() {
    int n;
    int cnt = 0;

    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>room[i];
    }

    for(int i = 0; i<n; i++) {
        if(room[i] == 1) {
            cnt++;

            if(room[i+2] = 0);
            else room[i+1] = 1;
            if(room[i+2] == 1) room[i+2] = 0;
            else room[i+2] = 1;
        }
    }
    cout<<cnt;
    return 0;
}