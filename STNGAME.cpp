#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		string alice,bob;
		cin>>n;
		cin>>alice>>bob;
		vector<int> al(n);
		vector<int> bo(n);

		for(int i= 0; i<n; i++){
			al[i] = alice.at(i);
			bo[i] = bob.at(i);
		}

		sort(al.begin(),al.end());
		sort(bo.begin(),bo.end(), greater<int>());
		ll ac = 0, bc = 0; // Alice count, Bob count
		ll ae = n-1, be = n-1;
		string front = "", back ="";

		for(int i = 0; i<2*n; i++){

			if(i%2){//bob's turn
				if(bo[bc] <= al[ac]){
					back = (char)bo[be] + back;
					be--;
				}
				else{
					front = front + (char)bo[bc];
					bc++;
				}

			}
			else{//Alice's turn
				if(al[ac] >= bo[bc]){
					back = (char)al[ae] + back;
					ae--;
				}
				else{
					front = front + (char)al[ac];
					ac++;
				}
			}

		}

		cout<<front<<back;
		cout<<endl;
	}
}