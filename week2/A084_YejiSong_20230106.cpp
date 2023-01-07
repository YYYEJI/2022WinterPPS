// Backjoon 11656 - 접미사 배열
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
	string tmp[1000];
	cin >> s;

	for(int i=0; i<s.length(); i++){
		tmp[i] = s.substr(i, s.length()); 
	}
	sort(tmp, tmp+s.length()); 
    
	for(int i=0; i<s.length(); i++){
		cout << tmp[i] << endl;
	}
}