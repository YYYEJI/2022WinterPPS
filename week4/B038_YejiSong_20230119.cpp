// Backjoon 16435 - 스네이크버드
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    vector<int>v(n);

    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    for(int i = 0; i<n; i++) {
        if(v[i]<=m) m+=1;
    }
    
    cout<<m;
}