#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n,m;
		cin>>n>>m;
		vector<int> jobs(n);
		vector<int> chef;
		vector<int> ass;
		for(int i = 0;i<n;i++){
			jobs[i] = i+1;
		}

		for(int i = 0; i< m; i++){
			int temp;
			cin>>temp;
			jobs[temp - 1] = -1;
		}

		bool chefTurn = true;
		int c = 0;
		int a = 0;

		for(int i = 0; i<n;i++){
			if(jobs[i] == -1){
				continue;
			}
			else if(chefTurn){
				chef.push_back(i+1);
				chefTurn = false;
			}else{
				ass.push_back(i+1);
				chefTurn = true;
			}

		}
		for(int i = 0; i<chef.size(); i++){
			cout<<chef[i]<<" ";
		}
		cout<<endl;
		for(int i = 0; i<ass.size(); i++){
			cout<<ass[i]<<" ";
		}
		cout<<endl;

		

	}
}