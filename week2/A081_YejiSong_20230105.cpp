// Backjoon 2693 - N번째 큰 수
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main() {
    int n,t;
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<10; j++) {
            cin>>t;
            v.push_back(t); 
        }

        sort(v.begin(), v.end());
        a[i] = v[7];
        v.clear();
    }

    for(int i = 0; i<n; i++) 
        cout<<a[i]<<"\n";

}