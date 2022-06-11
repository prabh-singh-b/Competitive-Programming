#include <iostream>
#define ll long long
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll x,y;
		cin>>x>>y;
		if(y>x){
			cout<<"BIKE"<<endl;
		}
		else if(x>y){
			cout<<"CAR"<<endl;
		}
		else{
			cout<<"SAME"<<endl;
		}
	}
}