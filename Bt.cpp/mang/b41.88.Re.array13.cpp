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
		sort(a,a+n);
        for(int i=0;i<m;i++){
        	for(int j=0;j<n;j++){
        		if(b[i]==a[j]) cout<<a[j]<<" ";
        		if(a[j]>b[i]) break;
 			}
		} ll check=1;
		for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++){
        		if(a[i]==b[j]){
        			check=0;
        			break;
				}
			} 
			if(check) cout<<a[i]<<" ";
			check=1;
		} 
        cout<<endl;
    }
    return 0;
}
