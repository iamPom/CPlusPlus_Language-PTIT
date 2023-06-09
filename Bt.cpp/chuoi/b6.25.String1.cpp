#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;	
	while(t--){
		cin.ignore();
		string s;
		int k;
		getline(cin,s);
		cin>>k;
		if(s.size()<26){
			cout<<0<<endl;
			continue;
		}
		if(k>25){
			cout<<1<<endl;
			continue;
		}
		int a[26],index,count=0;
		for(long long i=0;i<26;i++)
			a[i]=0;
		for(long long i=0;i<s.size();i++){
			if('A'<=s[i]&&s[i]<='Z'){
				index=s[i]-'A';
			}else if('a'<=s[i]&&s[i]<='z') index=s[i]-'a'; 
			a[index]=1;
		}
		for(long long i=0;i<26;i++)
			if(a[i]==0) count++;
		if(count<=k) cout<<1<<endl;
		else cout<<0<<endl;	
	}
	return 0;
}

