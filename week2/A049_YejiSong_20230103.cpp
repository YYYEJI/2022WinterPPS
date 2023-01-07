// Backjoon 4659 - 비밀번호 발음하기
#include <iostream>
using namespace std;

int main() {
    string s;
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

    while(true) {
        cin >> s;
        int a = 0;
        int v = 0;
        int c = 0;
        if(s == "end") break;
        for(int i = 0; i<s.length(); i++) {
            for(int j = 0; j<5; j++) {
                if(s[i]==vowel[j]) {
                    a = 1; break;
                }
            }
        }
        if(!a) {
            cout << "<" << s << ">" << " is not acceptable."<<endl;
        }
        else {
            for(int i = 0; i<s.length(); i++) {
                int b = 1;
                if(s[i]==s[i+1] && s[i]!='o' && s[i]!='e') {
                    a = 0; break;
                }
                for(int j = 0; j<5; j++) {
                    if(s[i] == vowel[j])
                    b = 0;
                }
                if(b==0) {
                    v++; 
                    c = 0;
                }
                else {
                    c++;
                    v = 0;
                }
                if(c == 3 || v==3) {
                    a = 0;
                    break;
                }
            }
            if(!a) {
                cout<<"<"<<s<<">"<<" is not acceptable."<<endl;
            }
            else {
                cout<<"<"<<s<<">"<<" is acceptable."<<endl;
            }
        }
    }
}