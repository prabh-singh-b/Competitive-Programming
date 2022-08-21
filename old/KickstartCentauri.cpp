#include <iostream>
#include <map>
using namespace std;

int main(){
	int t;
	cin>>t;
	map<char,int> mp;
	mp.insert({'a',1});
	mp.insert({'e',1});
	mp.insert({'i',1});
	mp.insert({'o',1});
	mp.insert({'u',1});
	mp.insert({'A',1});
	mp.insert({'E',1});
	mp.insert({'I',1});
	mp.insert({'O',1});
	mp.insert({'U',1});
	//{('a',1),('e',1),('i',1),('o',1),('u',1),('A',1),('E',1),('I',1),('O',1),('U',1)};
	for(int i = 1; i<=t;i++){
		string s, ruler = "";
		cin>>s;
		char c = s.at(s.length() -1);

		if(c == 'y'||c=='Y'){
			ruler = "nobody.";
		}
		else if(mp.count(c)){
			ruler = "Alice.";
		}
		else{
			ruler = "Bob.";
		}

		cout<<"Case #"<<i<<": "<<s<<" is ruled by "<<ruler<<endl;

	}
}