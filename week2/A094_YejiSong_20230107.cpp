// Backjoon 2941 - 크로아티아 알파벳
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int index;
    string str;
    cin>>str;

    for(int i = 0; i<v.size(); i++) {
        while(1) {
            index = str.find(v[i]);
            if(index == string::npos) break;
            str.replace(index, v[i].length(), "#");
        }
    }
    cout<<str.length();
}