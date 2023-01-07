// Backjoon 5355 - 화성 수학
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, t;
    double num, result;
    string o;
    cin>>a;

    while(a--) {
        cin>>num;
        getline(cin, o);

        for(int i = 0; i<o.size(); i++) {
            switch(o[i]) {
                case '@' : num*=3;
                        break;
                case '%' : num+=5;
                        break;
                case '#' : num-=7;
            }
        }

        printf("%.2f\n", num);
    }
        
}