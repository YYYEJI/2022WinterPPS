// Backjoon 1267 - 핸드폰 요금
#include <iostream>
using namespace std;

int main() {
    int n, time;
    int tcy = 0;    // Total Coin of Y
    int tcm = 0;    // Total Coin of M
    cin >> n;
    
    for(int i = 0; i<n; i++) {
        cin >> time;

        tcy += (time/30+1) * 10;
        tcm += (time/60+1) * 15;
    }


    if(tcm>tcy) cout<<"Y "<<tcy;
    else if(tcy>tcm) cout<<"M "<<tcm;
    else if(tcy==tcm) cout<<"Y M "<<tcy;
}