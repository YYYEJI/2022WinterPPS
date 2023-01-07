// Backjoon 1026 - 보물
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int c, n;
    int result = 0;
    cin>>c;
    vector<int> a;
    vector<int> b;

    for(int i = 0; i<c; i++) {
        cin >> n;
        a.push_back(n);
    }
    for(int i = 0; i<c; i++) {
        cin >> n;
        b.push_back(n);
    }
        
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i = 0; i<c; i++) {
        result += a[i] * b[c-i-1];
    }
    cout << result;
}