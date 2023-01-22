// Backjoon 4150 - 피보나치 수
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <string> v;

int main() {
	int n;
	cin >> n;

	v.push_back("0");
	v.push_back("1");
	
	for (int i = 2; i <= n; i++) {
		int a = v[i - 1].size(), b = v[i - 2].size(), res = 0, add = 0;
		string result, tmp;
		for (int j = a - 1; j >= 0; j--) {
			if (j - (a - b) >= 0) res = (v[i - 1][j] - 48) + (v[i - 2][j - (a - b)] - 48) + add;
			else res = v[i - 1][j] - 48 + add;
			if (res >= 10) {
				res -= 10;
				add = 1;
			}
			else add = 0;
			tmp = result;
			result = to_string(res) + tmp;
			if (j == 0 && add == 1) {
				tmp = result;
				result = to_string(add) + tmp;
			}
		}
		v.push_back(result);
	}

	cout << v[n];

	return 0;
}