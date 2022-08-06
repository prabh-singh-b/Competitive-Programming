#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int T;
	int min,temp;
	int N;
	cin >> T;
	while (T--) {
		cin >> N;
		vector<int> arr(N);

		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		/*for (int i = 0; i < N; i++) {
			for (int j = i+1; j < N; j++) {
				temp = (arr[i] > arr[j]) ? arr[i] - arr[j] : arr[j] - arr[i];
				min = (temp < min) ? temp : min; 
			}
		}*/
		min = arr[1] - arr[0];
		for (int i = 1; i < N - 1; i++) {
			temp = arr[i + 1] - arr[i];
			min = (min > temp) ? temp : min;
		}
		cout << min<<endl;
	}
}