// Backjoon 3135 - 라디오
#include <iostream>
using namespace std;

int from, to, n, gap, idx = 100;
int arr[7];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>from>>to>>n;
    for(int i = 0; i<n; i++) 
        cin>>arr[i];
    
    gap = abs(to-from);
    for(int i = 0; i<n; i++) {
        int tmp = abs(arr[i]-to);
        if(gap>tmp) {
            gap = tmp;
            idx = i;
        }
    }
    if(idx!=100) cout<<abs(arr[idx]-to)+1;
    else cout<<abs(to-from);
}