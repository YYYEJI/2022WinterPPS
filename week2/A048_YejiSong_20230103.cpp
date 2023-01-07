// Backjoon 1316 - 그룹 단어 체커
#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    string s;
    cin >> n;

    for (int i = 0; i<n; i++) {
        int c=0;
        int check[26]={0,};
        cin >> s;

        for(int i = 0; i<s.length(); i++) {
            if (i == 0) check[s[0]-'a']++;
            else {
                if(s[i]==s[i-1]) continue;
                else if(s[i]!=s[i-1] && check[s[i]-'a']==0) check[s[i]-'a'] = 1;
                else if (check[s[i]-'a']==1) c = 1;
            }
        }
        if(c == 0) cnt++;
    }

    cout<<cnt;
}