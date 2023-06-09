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
		ll max=a[0];
		for(ll i=0;i<n;i++){
			ll sum=1;
			if(a[i]>max) max=a[i];
			for(ll j=i;j<n;j++){
				sum*=a[j];
				if(sum>max) max=sum;
			}
		} cout<<max<<endl;
		
	}
	return 0;
}

