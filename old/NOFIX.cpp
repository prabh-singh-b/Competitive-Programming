#include <iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll min = 0;
		ll tem;

		for(int i = 1; i<=n; i++){
			cin>>tem;
			if(tem == (i+min)){
				min++;
			}
		}

		cout<<min<<endl;


	}
}