#include <iostream>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];                   
        for(long long j=0;j<n;j++){
            for(long long i=n-1;i>j;i--){
                if(a[i]<a[i-1]){
                    swap(a[i],a[i-1]);
                }
            }
        }
        cout<<a[k-1]<<endl;
    } 
    return 0;
}
