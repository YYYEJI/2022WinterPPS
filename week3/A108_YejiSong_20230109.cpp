// Backjoon 3062 - 수 뒤집기
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, numi;
    string s;
    bool b;
    
    cin>>n;
    while(n--){
        cin>>s;
        numi = stoi(s);
        reverse(s.begin(),s.end());
        numi += stoi(s);
        s = to_string(numi);
        b = true;
        for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            b = false;
        }
        }
        if(b){
        cout<<"YES\n";
        }else{
        cout<<"NO\n";
        }
    }
}