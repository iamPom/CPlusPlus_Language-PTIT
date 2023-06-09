#include<bits/stdc++.h>

using namespace std;
int checker(int n,int a[],int b){
	for(int j=0;j<n;j++){
		if(a[j]==b) return 1;
	} return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n],b[m],c[k],d[n+m+k],check=1,max=-2000000000;
		for(int i=0;i<n;i++){
			cin>>a[i];
			d[i]=a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			d[n+i]=b[i];
		} 
		for(int i=0;i<k;i++){
			cin>>c[i];
			d[n+m+i]=c[i];
		}
		sort(d,d+n+m+k);
		for(int i=0;i<n+m+k;i++){
			if(d[i]==d[i-2]&&d[i]>max&&checker(n,a,d[i])==1&&checker(m,b,d[i])==1&&checker(k,c,d[i])==1){
				cout<<d[i]<<" ";
				check=0;
				max=d[i];
			}
		}
		if(check==1) cout<<-1<<endl;
		else cout<<endl;
	}
	return 0;
}
