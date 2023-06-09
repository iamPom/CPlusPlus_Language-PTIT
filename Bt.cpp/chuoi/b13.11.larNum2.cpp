#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		string res="";
		while(s1.length()<s2.length()) s1= "0"+s1;
		while(s1.length()>s2.length()) s2= "0"+s2;
		int sum, digit=0;
		for(int i=s1.length()-1;i>=0;i--){
			int sum=(s1[i]-'0'+s2[i]-'0')+digit;
			digit= sum/10;
			res= char(sum%10+'0')+res;
		}if(digit>0) res= "1"+ res;
		 cout<<res<<endl;
	}
	return 0;
}

