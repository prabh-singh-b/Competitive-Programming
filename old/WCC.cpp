#include <iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll x;
		ll c = 0,n = 0;
		char ch;
		string wins;
		cin>>x;
		cin>>wins;
		for(int i = 0; i< 14; i++){
			ch = wins.at(i);
			if(ch=='C'){
				c += 2;
			}
			else if(ch == 'N'){
				n += 2;
			}
			else{
				c++;
				n++;
			}
		}

		if(c>n){
			cout<<60*x<<endl;
		}
		else if(n>c){
			cout<<40*x<<endl;
		}
		else{
			cout<<55*x<<endl;
		}



	}
}