#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int count=0;
		for(int i=0;i<s.size();i++)
			if(((s[i]!=' '&&s[i]!='\t'&&s[i]!='\n')&&(s[i+1]==' '||s[i+1]=='\t'||s[i+1]=='\n'))||((i+1==s.size()-1&&s[i]!=' '&&s[i+1]!=' '&&s[i]!='\t'&&s[i+1]!='\t'&&s[i]!='\n'&&s[i+1]!='\n')||(i+1==s.size()-1&&(s[i]==' '||s[i]=='\t'||s[i]=='\n'))))
			 count++;
		cout<<count<<endl;	
	}
	return 0;
}

