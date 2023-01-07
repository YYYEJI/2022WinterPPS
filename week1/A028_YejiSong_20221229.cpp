// Backjoon 10757 - 큰 수 A+B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<short> A;
    vector<short> B;
    vector<short> result;
    string a, b;
    cin >> a >> b;

    for (char num: a) 
        A.push_back(num-'0');
    
    for (char num: b) 
        B.push_back(num-'0');

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    
    int for_size= A.size()>B.size()?A.size():B.size();
    short carry = 0;
    short sum = 0;

    for(int i = 0; i<for_size; i++) {
        if(i+1>A.size()) A.push_back(0);
        if(i+1>B.size()) B.push_back(0);

        sum = A[i] + B[i] + carry;
       
        if(sum>9) {
            carry = 1;
            result.push_back(sum%10);
        } else {
            carry = 0;
            result.push_back(sum);
        }

        if(i==for_size-1 && carry == 1) result.push_back(1); 
        
    }

    reverse(result.begin(), result.end());
    for(int i = 0; i<result.size(); i++)
        cout<<result[i];

}