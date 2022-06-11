#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bin_search(vector<int> arr, int n, int uj) {

	int beg = 0;
	int end = n-1;
	int mid;

	while (beg != end) {
		mid = (beg + end) / 2;
		if (arr[mid] == uj) {
			
			return mid;
		}
		else if (arr[mid] > uj) {
			end = mid - 1;
		}
		else
			beg = mid + 1;
	}
	return beg;

}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n,key, uj;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cin >> key;
		uj = arr[key - 1];
		
		sort(arr.begin(), arr.end());
		key = bin_search(arr, n, uj);
		cout <<key + 1<<endl;


	}
}
