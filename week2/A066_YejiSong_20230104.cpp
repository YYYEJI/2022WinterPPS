// Backjoon 1427 - 소트인사이드
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b) {
    return a>b;
}

int main() {
    int a;
    cin >> a;

    vector<int> v;

    while(a>0) {
        int t = a%10;
        a = a/10;

        v.push_back(t);
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i<v.size(); i++) 
        cout<<v[i];
    
}   