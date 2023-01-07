// Backjoon 14487 - 욱제는 효도쟁이야!!
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> v;
    cin >> n;

    for(int i = 0; i<n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end(), greater<int>());

    int sum = 0;
    for(int a:v) sum+=a;
    sum-=v[0];

    cout<<sum;

}