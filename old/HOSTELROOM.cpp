#include <iostream>
#define ll long long
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,a;
		cin>>n>>a;
		ll max = a;
		ll cur = a;

		while(n--){
			ll temp;
			cin>>temp;
			cur += temp;
			if(cur>max){
				max = cur;
			}

		}

		cout<<max<<endl;
	}
}