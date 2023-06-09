#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;	
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int a[1000]={0},check=0;
		for(long long i=0;i<s.size();i++){
			a[s[i]]++;
		}
		for(long long i=0;i<s.size();i++){
			if(a[s[i]]>s.size()/2){
				check=1;
				break;
			}
		} if(check==1)cout<<0<<endl;
		else cout<<1<<endl;	
	}
	return 0;
}

