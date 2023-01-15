// Backjoon 1049 - 기타줄
#include <iostream>
using namespace std;

int main() {
    int n = 0, m = 0, x = 0, y = 0;
    int set = 1000, single = 1000;
    cin >> n >> m;

    while(m--) {
        cin >> x >> y;
        set = min(set, x);
        single = min(single, y);
    }
	
    cout << min((n/6+1)*set, min(n/6*set + n%6*single, n*single)) << '\n';
}