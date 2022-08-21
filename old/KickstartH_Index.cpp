#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int test = 1;test <=t;test++){
		int n;
		cin>>n;
		vector<int> arr;
		for(int i=0; i< n; i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		int max = 1;
		for(int i = 0; i<n;i++){
			if(arr[i] == max){
				continue;
			}
			else if(arr[i] > n - i){
				break;
			}
			else{
				int temp = arr[i];
				int num = n-i;
				if(num >= temp){
					max = temp;
				}
			}
		}

		cout<<max<<endl;
	}
	cout<<"asdf";
}