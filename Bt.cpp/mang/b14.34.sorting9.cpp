#include <iostream>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n],count=0;
        for(long long i=0;i<n;i++) cin>>a[i];                 
        for(long long i=0;i<n;i++){
            for(long long j=n-1;j>i;j--){
                if(a[i]+a[j]==k) count++; 
            }
        } cout<<count<<endl;
    } 
    return 0;
}
