// Backjoon 2164 - 카드2
#include <iostream>
#include <queue>
using namespace std;

int n;
queue<int> q;
int main() {
    cin>>n;

    for(int i = 0; i<n; i++) 
        q.push(i+1);
        
    while(q.size()>1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout<<q.front();
}   