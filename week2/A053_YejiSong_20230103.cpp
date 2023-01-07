// Backjoon 10828 - 스택
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int a, num, t;
    string s;
    stack<int> st;
    cin >> a;

    for (int i = 0; i<a; i++) {
        cin>>s;

        if (s=="push") {
            cin>>num;
            st.push(num);
        }
        else if (s=="pop") {
            if(st.empty()) cout<<-1<<endl;
            else {
                cout<<st.top()<<endl;
                st.pop();
            }
        }
        else if(s=="top") {
            if(!st.empty()) cout<<st.top()<<endl;
            else cout<<-1<<endl;
        }
        else if(s=="empty") {
            if(st.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(s=="size") cout<<st.size()<<endl;

    }

}