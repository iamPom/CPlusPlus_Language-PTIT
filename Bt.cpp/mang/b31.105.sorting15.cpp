#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],count=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			for(int j=i+1;a[j]-a[i]<k;j++){
				count++;
			}
		} cout<<count<<endl;

	}
	return 0;
}

