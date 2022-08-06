#include <iostream>
using namespace std;

int factorial(int n) {
	int res = 0;
	for (int i = 1; n/i > 0; i *= 5) {
		res += n / (i*5);
	}
	return res;
}

int main() {
	int T;
	int n;
	cin >> T;
	while (T--) {
		cin >> n;
		cout << factorial(n) << endl;
	}
	return 0;
}