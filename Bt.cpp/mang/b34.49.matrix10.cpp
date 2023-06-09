#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll a[n][m],b[n][m]={0};
		for(ll i=0;i<n;i++)
			for(ll j=0;j<m;j++){
				cin>>a[i][j];
				b[i][j]=a[i][j];
			}
				
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				if(a[i][j]==1){
				for(ll k=0;k<n;k++)
					b[k][j]=1;
				for(ll k=0;k<m;k++)
					b[i][k]=1;
				}
			}	
		}
		for(ll k=0;k<n;k++){
			for(ll l=0;l<m;l++){
				cout<<b[k][l]<<" ";
			} cout<<endl;
		}		
	}
	return 0;
}

