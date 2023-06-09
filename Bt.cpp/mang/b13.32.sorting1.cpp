#include <iostream>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];                 
        for(long long i=0;i<n;i++){
            for(long long j=n-1;j>i;j--){
                if(a[j]>a[j-1]) swap(a[j],a[j-1]);
            }
        }
        cout<<a[0]<<" ";
        for(long long i=1;i<n/2;i++) cout<<a[n-i]<<" "<<a[i]<<" ";
		if(n%2==0) 
        cout<<a[n/2]<<endl;
        else cout<<a[n/2+1]<<" "<<a[n/2]<<endl;
    } 
    return 0;
}
