#include <iostream>
using namespace std;

int amb(int n) {
	int rem = n % 10;
	if (rem == 9) {
		n = n - 1;
	}
	else
		n = n + 1;
	return n;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << amb(a - b);
	return 0;

}