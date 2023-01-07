// Backjoon 1157 - 단어 공부
#include <iostream>
using namespace std;

int main() {
    string s;
    int max = 0;
    int check = 0;
    int max_index;
    int str[26] = {0,};
    cin>>s;

    for(int i = 0; i<s.length(); i++) {
        if('a'<=s[i] && 'z'>=s[i]) 
            str[s[i]-'a']++;
        if('A'<=s[i] && 'Z'>=s[i])
            str[s[i]-'A']++;
    }

    for(int i = 0; i<26; i++) {
        if(max<str[i]) {
            max_index = i;
            max = str[i];
        }
    }
    for(int i = 0; i<26; i++) 
        if(max == str[i]) check++;


    if(check > 1) cout<<"?";
    else cout<<(char)(max_index+65);
}