// Backjoon 5622 - 다이얼
#include <iostream>
using namespace std;

int main() {
    string phone;
    int result = 0;
    int time;
    int a[26] = {0,};

    cin>>phone;
    for(int i = 0; i<phone.length(); i++) {
        a[phone[i]-'A']++;
    }

    for(int i = 0; i<='Z'-'A'; i++) {
        if(i == 'S'-'A' || i == 'V'-'A') {
            result += (i/3+2)*a[i];
            continue;
        }
        if(a[i]){
            time = i/3+3;
            result += (time>9)?10*a[i]:time*a[i];
        }

    }
    cout<<result;
}