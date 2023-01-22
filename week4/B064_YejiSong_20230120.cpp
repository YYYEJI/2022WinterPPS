// Backjoon 3273 - 두 수의 합
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, a, target;
    cin>>n;
    vector<int> v;
    for(int i = 0; i<n; i++) {
        cin>>a;
        v.push_back(a);
    }
    cin>>target;
    sort(v.begin(), v.end());
    int l = 0, r = n-1, cnt = 0;

    while(1) {
        if(l>=r) break;
        int sum = v[l]+v[r];
        if(sum == target) {
            cnt++;
            l++;
            r--;
        }
        else if(sum<target) l++;
        else r--;
    }


    cout<<cnt;
    return 0;
}