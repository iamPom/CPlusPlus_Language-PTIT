#include <iostream>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        for(long long j=0;j<k;j++){
            for(long long i=n-1;i>j;i--){
                if(a[i]>a[i-1]){
                    swap(a[i],a[i-1]);
                }  
            }
        }
        for(long long i=0;i<k;i++){
            cout<<a[i]<<" ";
        }   cout<<endl;            
    } 
    return 0;
}
