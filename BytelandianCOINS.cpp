#include <iostream>
#include <map>
#define ll long long
using namespace std;


static map<ll,ll> mp;

ll dollars(ll n){
	if(n<2){
		return n;
	}

	if(mp.count(n)){
		return mp[n];
	}

	return mp[n] = max(n,dollars(n/2) + dollars(n/3) + dollars(n/4));



}

int main(){

		ll n;
		while(cin>>n)
			cout<<dollars(n)<<endl;
	}
