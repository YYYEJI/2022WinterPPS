// Backjjon 1541 - 잃어버린 괄호
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int len, tmp;
int sum = 0;
bool b;
char str[51];

int main() {
    cin>>str;
    len = strlen(str);

    for(int i = 0; i<len; i++) {
        if(str[i]=='+' || str[i]=='-' || i==len) {
            if(b == false) {
                sum+=tmp;
                tmp = 0;
            } else {
                sum-=tmp;
                tmp = 0;
            }
            if(str[i]=='-') b = true;
        } else {
            tmp *= 10;
            tmp += str[i]-'0';
        }

        cout<<sum;
    }
}