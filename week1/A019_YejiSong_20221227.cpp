// Backjoon 2577 - 숫자의 개수
#include <iostream>
using namespace std;

int main() {
    int a, b, c, mult;
    int nums[10] = {0,};
    cin >> a >> b >> c;

    mult = a*b*c;
    std::string str = std::to_string(mult);

    for(int i = 0; i<str.size(); i++) {
        if(str[i] == '0') nums[0]++;
        else if(str[i] == '1') nums[1]++;
        else if(str[i] == '2') nums[2]++;
        else if(str[i] == '3') nums[3]++;
        else if(str[i] == '4') nums[4]++;
        else if(str[i] == '4') nums[4]++;
        else if(str[i] == '5') nums[5]++;
        else if(str[i] == '6') nums[6]++;
        else if(str[i] == '7') nums[7]++;
        else if(str[i] == '8') nums[8]++;
        else if(str[i] == '9') nums[9]++;
    }

    for(int i = 0; i<10; i++) {
        cout<<nums[i]<<endl;
    }
}