// Backjoon 2231 - 분해합
#include <iostream>
using namespace std;

int solution(int n) {
	int sum = n;
	while (n) {
		sum = sum + n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i < n; i++) {
		int sum = solution(i);
		if (sum == n) {
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	
}