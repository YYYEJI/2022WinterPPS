// Backjoon 17210 - 문문문
#include <iostream>
using namespace std;

int main() {
    int n;
    bool m, c;
    cin >> n >> m;

    for (int i = 1; i<n; i++) {
        if(i%2==0) {
            c = m;
        } else c = !(m);
    
        if(i%3==2 && c!=m) {
            cout << "Love is open door";
            return 0;
        }
    }

    for(int i = 1; i<n; i++) {
        if(i%2==0) cout << m << endl;
        else cout << !m << endl;
    }
}