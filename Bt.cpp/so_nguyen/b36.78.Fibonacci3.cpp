#include <iostream>
using namespace std;

int isFibo(long long n){
	if(n==0||n==1)
        return 1;
    long long f0=0,f1=1,fn=1;
    while(fn<=n){
        f0=f1;
    	f1=fn;
        fn=f0+f1;
        if(fn==n) return 1;
	} return 0;
}
int main () {  
    long long t, n;
        cin>>t;
    while (t--){
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        	cin>>a[i];
       	for(int i=0;i<n;i++)
		if(isFibo(a[i])) cout<<a[i]<<" ";
		cout<<endl;
        
    }
    return 0;
}
