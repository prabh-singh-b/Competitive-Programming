#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,w;
		cin>>n>>w;
		vector<int> arr(n);
		for(int i = 0; i< n;i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end(),greater<int>());
		ll max = 0;
		ll days = 0;
		for(int i = 0; max<w;i++){
			max += arr[i];
			days++;
		}

		cout<<n -days<<endl;
	}
}