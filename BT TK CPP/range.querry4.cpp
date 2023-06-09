#include<bits/stdc++.h>

using namespace std;

long long test(int n,int a[]){
	long long max2=0,max1=0;
	int x=-2000000;
	int check=1;
	for(int i=0;i<n;i++){
		if(a[i]>=0) check=0;
		else x=max(x,a[i]);
		max2+=a[i];
		if(max2<0) max2=0;
		if(max2>max1) max1=max2;
	}
	if(check) return x;
	return max1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<test(n,a)<<endl;
	}
	return 0;
}

