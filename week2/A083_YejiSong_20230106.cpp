// Backjoon 10867 - 중복 빼고 정렬하기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> a;

    cin>> n;
    int t;

    for(int i = 0; i<n ; i++) {
        cin>>t;
        a.push_back(t);
    }

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    for(auto arr:a) 
        cout<<arr<<" ";
    
}



/*  아무리 봐도 맞아 ...
int main() {
    int a[1001] = {0,};
    int n, t;

    cin>>n;

    for(int i = 0; i<n; i++) {
        cin>>t;
        a[abs(t)] = 1;
    }

    for(int i = 0; i<1001; i++) 
        if(a[i] == 1) cout<<i<<" "; 
    
    cout<<"\n";
}
*/