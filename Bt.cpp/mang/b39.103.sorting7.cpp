#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int min=-1, max=-1,m=0;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]) {
				min=i+1;
				m=i;
				break;	
			}
		}
		for(int i=m;i<n;i++){
			if(a[i]!=b[i]) max=i+1;
		}
		cout<<min<<" "<<max<<endl;

	}
	return 0;
}

