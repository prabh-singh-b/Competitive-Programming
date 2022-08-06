#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long int n;
		long int one = 0,zero = 0;
		cin>>n;
		string bin;
		cin>>bin;
		for(int i = 0; i< n; i++){
			if(bin.at(i) == '0'){
				zero++;
			}
			else
				one++;
		}

		if(n%2){
			cout<<"YES"<<endl;

		}
		else{
			if(zero==one){
				cout<<"YES"<<endl;
			}
			else if(zero%2){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}

	}
}