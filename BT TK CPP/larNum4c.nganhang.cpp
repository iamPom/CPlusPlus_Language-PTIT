#include<bits/stdc++.h>
#include<fstream>
#define ll long long
using namespace std;

 string division(string number, ll divisor){
	string kq ="";
	ll idx = 0; 
	ll temp = number[idx] - '0';
	while(temp < divisor) {
		temp = temp *10 + (number[++idx]-'0');
	}
	while(number.length() > idx)
	{
		kq += (temp/ divisor) + '0';
		temp = (temp%10) * 10 + (number[++idx] - '0'); 
	} 
	if(kq.length() == 0) return "0";
	return kq;
	}	
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		ll divisor;
		cin>>s>>divisor;
		cout<<division(s,divisor)<<endl;
	}
	return 0;
}

