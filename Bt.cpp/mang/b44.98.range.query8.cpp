#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){   
		ll n,k;
		cin>>n>>k;
		ll a[n],l,r;
		float tbc=-1000;
		for(ll i=0;i<n;i++) cin>>a[i];
		if(k==1){
			sort(a,a+n);
			cout<<a[n-1]<<a[n-1]<<endl;
			continue;
		}
		for(ll i=0;i<=n-k;i++){
			ll sum=0;
			for(ll j=i;j<i+k;j++){
				sum+=a[j];
			} if(float(sum)/k>tbc ){
				tbc=float(sum)/k;
				l=i;
				r=i+k-1;
				}
		}
		for(int i=l;i<=r;i++){
			cout<<a[i]<<" ";
		}cout<<endl;
	}	
    return 0;
}
