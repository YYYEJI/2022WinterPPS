// Backjoon 3059 - 등장하지 않는 문자의 합
#include <iostream>
using namespace std;
string s;
int n, sum;

int main() {
    int a[26] = {0,};
    cin >> n;
    while (n--)
    {
        sum = 0;
        for (int i = 0; i < 26; i++)
            a[i] = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
            a[s[i] - 'A'] = 1;
        for(int i = 0; i<26; i++)
            if (a[i] == 0) { sum += i + 'A'; }
        cout << sum << '\n';
    }
}