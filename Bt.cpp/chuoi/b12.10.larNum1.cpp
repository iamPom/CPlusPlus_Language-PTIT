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
		if(s1<s2) swap(s1,s2);
		for(int i=s1.length()-1;i>0;i--){
			if(s1[i]>=s2[i]) res= char(s1[i]-s2[i]+'0')+res;
			else{
				res=char(s1[i]-s2[i]+10+'0')+res;
				s1[i-1]--;
			}
		} 
		res=char(s1[0]-s2[0]+'0')+res;
		cout<<res<<endl;
	}
	return 0;
}

