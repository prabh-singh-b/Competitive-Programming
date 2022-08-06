	#include <iostream>
	#define ll long long
	using namespace std;

	int main(){
		ll t;
		cin>>t;
		while(t--){
			ll n,x,y;
			cin>>n>>x>>y;
			ll bus = 0,car = 0;

			ll a,b,c;

			a = n/100;
			if(n%100){
				a++;
			}

			b = n/4;
			if(n%4){
				b++;
			}

			c = n/100;
			c = c*x;
			n = n%100;
			c += (n/4)*y;
			if(n%4){
				c += y;
			}

			a = a*x;
			b = b*y;

			ll min = (a<b)? a: b;
			min = (min<c)?min:c;

			cout<<min<<endl;



		}
	}