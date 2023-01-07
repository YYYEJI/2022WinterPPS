// Backjoon 17211 - 좋은 날 싫은 날
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int d,n;
    double mood[4],good=0,bad=0,good_day,bad_day;

    cin >> d >> n;
    cin >> mood[0] >> mood[1] >> mood[2] >> mood[3];

    if(n == 1){
      good = mood[2];
      bad = mood[3];
    }
    else if(n == 0){
      good = mood[0];
      bad = mood[1];
    }

    for(int i=0 ; i < d-1 ; i++){
      good_day = good*mood[0] + bad*mood[2];
      bad_day = bad*mood[3] + good*mood[1];
      good = good_day;
      bad = bad_day;
    } 

    good = good*1000;
    bad = bad*1000;
    
    cout << (int)good << endl;
    cout << (int)bad << endl;
    return 0;
}

// 기분이 좋은 날일 확률
// 다음 날은 기분이 싫은 날일 확률
// 기분이 싫은 날의 다음 날의 기분이 좋은 날일 확률
// 다음 날도 기분이 싫은 날일 확률