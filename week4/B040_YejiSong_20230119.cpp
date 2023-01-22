// Backjoon 2806- DNA 발견
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
queue<int>q;
vector<int>v[101];
int computer[100];
int result;

void input() {
	int n, end;
	cin >> n >> end;
	for (int i = 0; i < end; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
}

void bfs(int com) {
	q.push(com);
	computer[com] = 1;
	while (!q.empty()) {
		int c = q.front();
		int vSize = v[c].size();
		q.pop();
		for (int i = 0; i < vSize; i++) {
			if (computer[v[c][i]] == 0) {
				q.push(v[c][i]);
				computer[v[c][i]] = 1;
				result++;
			}
		}

	}
}

int main() {
	input();
	bfs(1);
	cout << result;
}
