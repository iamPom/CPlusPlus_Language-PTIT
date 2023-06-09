#include<bits/stdc++.h>

using namespace std;
long long strMax(long long a[],long long b[],int n){
	long long lenMax=0;
	for(long long i=0;i<n;i++){
		long long max1=0,max2=0;
		for(long long j=i;j<n;j++){
			max1+=a[j];
			max2+=b[j];
			if(max1==max2){
				long long len=j-i+1;
				if(len>lenMax) lenMax=len;
			}
		}
	}
	return lenMax;
}
void nhap(long long a[1000],long long n){
	for(long long i=0;i<n;i++)
		cin>>a[i];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n],b[n];
		nhap(a,n);
		nhap(b,n);
		cout<<strMax(a,b,n)<<endl;	
	}
	return 0;
}

