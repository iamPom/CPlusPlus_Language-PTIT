#include <iostream>
using namespace std;

int main () {
    int t;  
    long long int n,f0,f1,fn,a;
        cin>>t;
        while (t--){
        cin>>n;
        if(n==0||n==1){
            cout<<"YES"<<endl;
            continue;
        } 
		f0=0;
        f1=1;
        fn=1;
        a=0;
        while(fn<=n){
        	f0=f1;
        	f1=fn;
        	fn=f0+f1;
        	if(fn==n){
        		cout<<"YES"<<endl;
        		a=1;
        		break;
			}
		}
        if(a==0) cout<<"NO"<<endl;
    }
    return 0;
}
