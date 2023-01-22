// Backjoon 11725 - 트리의 부모 찾기
#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[100001];
bool visited[100001];
vector<int> v[100001];

void dfs(int x) {
    visited[x] = true;
    for(int i = 0; i<v[x].size(); i++) {
        int next = v[x][i];
        if(visited[next]) {
            arr[next] = x;
            dfs(next);
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i<n; i++ ) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1);

    for(int i = 2; i<=n; i++) cout << arr[i] << "\n";
}