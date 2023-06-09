#include <bits/stdc++.h>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);           
		cout<<a[k-1]<<endl;
	}	
    return 0;
}