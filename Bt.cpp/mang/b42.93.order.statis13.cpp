#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){   
		ll n,m;
		cin>>n>>m;
		ll a[n],b[m];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		ll sum=0;
		if(n!=m){
			if(n>m){
				sum+=b[0]+a[n-1];
				for(int i=1;i<n-1;i++){
					if(i<m-1) sum+=max(a[i],b[i]);
					else sum+=a[i];
				}
			}else{
				sum+=b[m-1]+a[0];
				for(int i=1;i<m-1;i++){
					if(i<n-1) sum+=max(a[i],b[i]);
					else sum+=b[i];
				}
			}
		}else {
			sum+= max(a[0]+b[n-1],a[n-1]+b[0]);
			for(int i=1;i<n-1;i++){
				sum+=max(a[i],b[i]);
			}
		} cout<<sum<<endl;     
    }
    return 0;
}
