// Backjoon 9546 - 3000번 버스
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; 
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        int cnt = 1;
        int pre = 1;
        for(int j = 1; j < tmp; j++){
            cnt += (pre * 2);
            pre = pre * 2;
        }

        cout << cnt << '\n';
    }
    return 0;
}