#include<bits/stdc++.h>
using namespace std;
int main(){	
	string str,s;
	getline(cin,str);
	getline(cin,s);
	str.erase(str.find(s),s.size());
	cout<<str<<endl;
	return 0;
}
