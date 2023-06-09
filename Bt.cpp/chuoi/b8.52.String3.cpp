#include<bits/stdc++.h>

using namespace std;
int testStr(string s){
	if(s == "00") return 0;
	if(s =="01") return 1;
	if(s =="10") return 2;
	return 3;
}
int main(){
	int t;
	cin>>t;	
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(s.size()%2==1) s='0'+s;
		long long sumChan=0,sumLe=0;
		bool soDigit= true;
		for(long long i=0;i<s.size();i+=2){
			if(soDigit) sumChan += testStr(s.substr(i,2));
			else sumLe += testStr(s.substr(i,2));
			soDigit = !soDigit;
		}
		if((sumChan-sumLe)%5==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;	
	}
	return 0;
}

