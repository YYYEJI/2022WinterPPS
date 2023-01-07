// Backjoon 1159 - 농구 경기
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    int check = 0;
    int a[26] = {0,};
    string str = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i<n; i++) {
        cin >> s;
        a[s[0]-'a']++;
    }

    for(int i = 0; i<26; i++) {
        if(a[i]>4) {
            cout<<str[i];
            check = 1;
        }
    }
    if(check == 0) cout<<"PREDAJA";
}