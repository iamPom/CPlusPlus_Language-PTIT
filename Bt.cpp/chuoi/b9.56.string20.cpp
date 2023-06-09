#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;	
	cin.ignore();
	while(t--){
		string s,s1;
		getline(cin,s);
		s+=' ';
		for(long long i=s.size()-1;i>=0;i--){
			if(s[i-1]==' '&&s[i]!=' '){
				for(long long j=i;j<s.size();j++){
					s1+=s[j];
					if(s[j]==' ') break;
				}
			}
		}
		for(long long j=0;j<s.size();j++){
			s1+=s[j];
			if(s[j]==' ') break;
		}
		
		cout<<s1<<endl;	
	}
	return 0;
}

