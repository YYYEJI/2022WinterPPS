// Backjoon 11721 - 열 개씩 끊어 출력하기
#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin>>a;

    for(int i = 0; i<a.size(); i++) {
        cout<<a[i];
        
        if(i%10==9) cout<<"\n";
    }
}