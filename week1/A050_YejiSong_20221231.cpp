// Backjoon 5598 - 카이사르 암호
#include <iostream>
using namespace std;

int main() {
    string a_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string a_2 = "DEFGHIJKLMNOPQRSTUVWXYZABC";
    string result = "";
    string a;

    cin>>a;

    for(int i = 0; i<a.length(); i++) {
        for(int j = 0; j<26; j++) {
            if(a[i] == a_2[j]) result+=a_1[j];
        }
    }
    cout<<result;
}