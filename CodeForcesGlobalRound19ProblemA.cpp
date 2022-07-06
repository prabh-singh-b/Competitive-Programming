#include <iostream>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		ll max = -1;
		cin>>n;
		string ans = "NO";
		for(int i = 0; i<n; i++){
			ll temp;
			cin>>temp;
			if(temp<max){
				ans = "YES";
			}
			else{
				max = temp;
			}
		}
		cout<<ans<<endl;
	}
}