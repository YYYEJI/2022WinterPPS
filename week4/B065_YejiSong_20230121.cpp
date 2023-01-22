// Backjoon 1806 - 부분합
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];
int n, m;
int main() {
    cin >> n >> m;
    for(int i = 1; i<=n; i++) cin>>arr[i];
    int st = 1, en = 1, total = arr[1], ans=987654321;
    while(st <= en && en <= n) {
        if(total>=m) ans = min(ans, (en-st+1));
        if(total<m) {
            en++;
            total+=arr[en];
        }
        else {
            total -= arr[st];
            st++;
        }
        if(ans == 987654321) cout<< "0";
        else cout<<ans;
    }
}