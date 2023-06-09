#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n],b[m],c[n],d[n+m+k],check=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			d[i]=a[i];
		}
		for(int i=n;i<n+m;i++){
			cin>>b[i];
			d[n+i]=b[i];
		} 
		for(int i=n+m;i<n+m+k;i++){
			cin>>b[i];
			d[n+m+i]=b[i];
		}
		sort(d,d+n+m+k);
		for(int i=0;i<n+m+k;i++){
			if(d[i]==d[i-1]){
				cout<<d[i]<<" ";
				check=0;
			}
		}
		if(check) cout<<-1<<endl;
		else cout<<endl;
	}
	return 0;
}
