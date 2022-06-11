#include <iostream>
#define ll long long
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		n= n*2;
		ll odd = 0,even = 0;

		while(n--){
			ll temp;
			cin>>temp;
			if(temp%2){
				odd++;
			}
			else
				even++;
		}

		if(odd%2||even%2){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}