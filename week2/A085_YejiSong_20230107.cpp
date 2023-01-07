// Backjoon 1431 - 시리얼 번호
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const string &a, const string &b) {
    if(a.length()!=b.length()) 
        return a.length() < b.length();
    else {
        int s1 = 0, s2 = 0;
        for(int i = 0; i<a.length(); i++) {
            if(a[i]>='0' && a[i]<='9') s1+=a[i]-'0';
        }
        for(int i = 0; i<b.length() ; i++) {
            if(b[i]>='0' && b[i]<='9') s2 += b[i]-'0';
        }

        if(s1!=s2) return s1<s2;
        else return a<b;
    }
}
int main() {
    int n;
    cin>>n;

    vector<string> v(n);
    for(int i = 0; i<n; i++) 
        cin>>v[i];
    
    sort(v.begin(), v.end(), compare);

    for(auto a:v) 
        cout<<a<<"\n";
    
}