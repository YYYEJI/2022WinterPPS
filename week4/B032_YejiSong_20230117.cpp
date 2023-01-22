// Backjoonn 9237 - 이장님 초대
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> v;

int main() {
    cin>>n;

    for(int i = 0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    
    int days=0;
    for(int i = 0; i<n; i++) 
        days = max(days, v[i]+i+1);

    cout<<days+1;
}
