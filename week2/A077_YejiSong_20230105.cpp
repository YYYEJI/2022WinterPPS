// Backjoon 2822 - 점수 계산
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}
int main() {
    vector<pair<int, int>> v(8);

    for(int i = 0; i<8; i++) {
        cin>>v[i].first;
        v[i].second = i+1;
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    int sum = 0;
    vector<int> index;

    for(int i = 0; i<5; i++) {
        sum += v[i].first;
        index.push_back(v[i].second);
    }

    cout<<sum<<"\n";

    sort(index.begin(), index.end());
    for(int i = 0; i<index.size(); i++) 
        cout<<index[i]<<" ";
    cout<<"\n";

}