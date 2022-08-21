#include <iostream>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,x,y;
		cin>>a>>b>>x>>y;
		ll req_power = a*b;
		ll ava_power = x*y;

		if(ava_power<req_power){
			cout<<"NO"<<endl;
		}
		else
			cout<<"YES"<<endl;
	}
}