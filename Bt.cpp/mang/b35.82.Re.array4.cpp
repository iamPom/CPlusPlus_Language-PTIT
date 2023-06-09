#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n]={0};
		for(ll i=0;i<n;i++)	cin>>a[i];
		sort(a,a+n);
		cout<<a[0]<<" ";
		if(n%2==0) {
			for(int i=1;i<n/2;i++){
				cout<<a[i+n/2-1]<<" ";
				cout<<a[i]<<" ";
			} cout<<a[n-1]<<endl;
		} else{
			for(int i=1;i<n/2+1;i++){
				cout<<a[i+n/2]<<" ";
				cout<<a[i]<<" ";
			}cout<<endl;
		}
		
	}
	return 0;
}

