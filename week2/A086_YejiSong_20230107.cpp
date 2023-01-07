// Backjoon 1755 - 숫자놀이
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    string s;
    string numbers[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<pair<string, int>> v;

    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin>>n>>m;
    for(int i = n; i<=m; i++) {
        if(i>=10) {
            s = numbers[i/10] +" "+numbers[i%10];
            v.push_back({s, i});
        }
        else {
            s = numbers[i%10];
            v.push_back({s, i});
        }
    }
    sort(v.begin(), v.end());

    for(int i = 0; i<v.size(); i++) {
        cout<<v[i].second<<" ";
        if(i%10==9) cout<<'\n';
    }
}

