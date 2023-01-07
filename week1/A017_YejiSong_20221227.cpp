// Backjoon 1475 - 방 번호
#include <iostream>
#include<algorithm> 
using namespace std;

int main() {
    int nums[10] = {0,};
    int number = 0;
    int a;

    cin >> a;
    
    while(true) {
        nums[a%10]++;
        if(a/10 == 0) break;
        a /= 10;
    }

    for(int i = 0; i<10; i++) {
        if(i!=6 && i!=9)
            number = max(number, nums[i]);
    }
    number = max(number, (nums[6]+nums[9]+1)/2);
    
    cout<<number;
}