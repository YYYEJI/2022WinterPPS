// Backjoon 8958 - OX퀴즈
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string ox;
    cin>>n;
    
    for(int i = 0; i<n; i++) {
        cin>>ox;
        int score = 0;
        int sum = 0;

        for(int j = 0; j<ox.length(); j++) {
            if(ox[j]=='O') score++;
            else score = 0;

            sum+=score;
        }
        cout<<sum<<endl;
    }
    
}