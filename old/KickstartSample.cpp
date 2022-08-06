#include <iostream>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i = 1;i<=t;i++){
		ll n,m;
		ll c = 0;
		cin>>n>>m;
		while(n--){
			int temp;
			cin>>temp;
			c += temp;
		}

		cout<<"Case #"<<i<<": "<<c%m<<endl;
	}
}