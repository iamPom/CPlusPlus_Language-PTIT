#include<bits/stdc++.h>

using namespace std;
int main(){
	string s,s1;
	getline(cin, s);
	for(long long i=0;i<s.size();i++){
		if(s[i]>64&&s[i]<91)
		s[i]+=32;
	}
	long long check=0,k;
	for(long long i=s.size()-1;i>=0;i--){
		if(s[i-1]==' '&&s[i]!=' '){
			k=i;
			break;
		} else{ if(i==0){
			check=1;
			k=i;
			}	
		}
	}
	for(long long i=k;i<s.size();i++){
		if(s[i]==' ') break;
		s1+=s[i];
	} 
	if(check==0&&s[0]!=' ') s1+=s[0]; 
	if(check==0){
		for(long long i=0;i<k-1;i++){
		if(s[i]==' '&&s[i+1]!=' ') s1+=s[i+1];
		}
	}
	s1+="@ptit.edu.vn";
	cout<<s1<<endl;
	return 0;
}

