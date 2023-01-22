// Backjoon 10026 - 적록색약
#include <iostream>
using namespace std;


int n, cnt = 0;
char photo[100][100];
bool visited[100][100] = {false};

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void dfs(int x, int y) {
    visited[x][y] = true;
    for(int i = 0; i<4; i++) {
        int nx = x+dx[i];
        int ny = y+dy[i];

        if(nx<0 || nx>=n ||ny<0||ny>=n) continue;
        if(!visited[nx][ny]&&photo[x][y] == photo[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i<n; i++) cin>>photo[i];

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            if(!visited[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout<<cnt;

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            if(photo[i][j] == 'G') photo[i][j] = 'R';
            else photo[i][j] == photo[i][j];
        }
    }
    memset(visited, false, sizeof(visited));

    cnt = 0;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            if(!visited[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}