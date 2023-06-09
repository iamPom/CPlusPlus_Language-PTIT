#include<bits/stdc++.h>

using namespace std;
long long sumDigit(long long n){
	return (1+(n-1))*(n-1)/2;
}
int main(){
	int t;
	cin>>t;	
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		long long a[1000]={0},sum=s.size();
		for(long long i=0;i<s.size();i++){
			a[s[i]]++;
		}
		for(long long i=0;i<200;i++){
			if(a[i]>2){
				sum+=sumDigit(a[i]);
			}
			if(a[i]==2) sum++;
		} cout<<sum<<endl;	
	}
	return 0;
}

