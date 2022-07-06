#include <iostream>
#define ll long long
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		a = a+c;
		ll max = (a>b)?a:b;
		cout<<max<<endl;
	}
}