#include<bits/stdc++.h>

using namespace std;
int main(){
	string s;
	getline(cin,s);
	while(s[0]==' ') s.erase(s.begin());
	for(long long i=1;i<s.size();i++){
		if(s[i]==' '&&s[i+1]==' '){
			s.erase(s.begin()+i+1);
			i--;
		}
		if(s[i]>=65&&s[i]<=90) s[i]+=32;
	} if(s[0]>=97&&s[0]<=122) s[0]-=32;
	if(s[s.size()-1]==' ') s.erase(s.size()-1);
	long long k;
	for(long long i=s.size();i>=0;i--){
		if(s[i]!=' '&&s[i-1]==' '){
			k=i;
			break;
		}
	}
	for(long long i=1;i<s.size();i++){
		if(i<k){
			if(s[i]==' '){
			if(s[i+1]>=97&&s[i+1]<=122) s[i+1]-=32;
			}
		} else{
			if(s[i]>=97&&s[i]<=122) s[i]-=32;
		} 
	} s.insert(k-1,",");
	
	cout<<s<<endl;
	return 0;
}

