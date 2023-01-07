// Backjoon 4344 - 평균은 넘겠지
#include <iostream>
using namespace std;

int main() {
    int t, n, avg;   // test case, number of people
    int score[1000] = {0,};
    double result;
    
    cin >> t;
    for(int i = 0; i<t; i++) {
        int sum = 0;
        int cnt = 0;
        cin >> n;
        for(int j = 0; j<n; j++) {
            cin >> score[j];
            sum += score[j];
        }
        avg = sum/n;

        for(int j = 0; j<n; j++) {
            if(score[j]>avg) cnt++;
        }

        result = (double)cnt / n*100;

        cout << fixed;
		cout.precision(3);
        cout << result <<"%"<<endl;
    }
}