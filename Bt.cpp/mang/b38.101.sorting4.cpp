#include<bits/stdc++.h>

using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n;
		cin>>m;
		long long a[n],b[m],c[n+m];
		for(int i=0;i<n;i++){
			cin>>a[i];
			c[i]=a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			c[n+i]=b[i];
		} 
		sort(c,c+n+m);
		for(int i=0;i<n+m;i++){
			if(c[i]!=c[i-1]) cout<<c[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<n+m;i++){
			if(c[i]==c[i-1]) cout<<c[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

