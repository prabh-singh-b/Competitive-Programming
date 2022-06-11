#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, m, temp = 0, count =0;
		cin >> n >> m;
		vector<int> arr(n-m);
		vector<int> done(m);
		for (int i = 0; i < m; i++) {
			cin >> done[i];
		}
		sort(done.begin(), done.end());
		for (int i = 1; i <= n; i++) {
			if (done[temp] == i) {
				if (temp == m - 1) {
				}
				else {
				temp++;
				}
				continue;
			}
			else {
				arr[count++] = i;
			}
		}
		sort(arr.begin(), arr.end());

		for (int i = 0; i < n - m; i= i+2) {
			cout << arr[i] << " ";
		}
		cout << endl;
		for (int i = 1; i < n - m; i = i + 2) {
			cout << arr[i] << " ";
		}
		cout << endl;

	}
}