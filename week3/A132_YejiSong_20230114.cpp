// Backjoon 1002 - 터렛
#include <iostream>
using namespace std;
int main() {
    int x1,y1,r1,x2,y2,r2,d,condition_1,condition_2,n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
        condition_1 = (r1-r2) * (r1-r2);
        condition_2 = (r1+r2) * (r1+r2);
        
        if(d == 0) {
            if(condition_1 == 0) cout << "-1" << '\n';
            else cout << "0" << '\n';
        }
        else if (d == condition_1 || d == condition_2) cout << "1" << '\n';
        else if (condition_1 < d && d < condition_2) cout << "2" << '\n';
        else cout << "0" << '\n';
    }

}