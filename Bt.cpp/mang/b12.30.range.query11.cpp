#include <iostream>
#include <math.h>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n],min=2000 ;
        for(long long i=0;i<n;i++) cin>>a[i];                 
        for(long long i=0;i<n;i++){
            for(long long j=n-1;j>i;j--){
                if(min>abs(a[i]-a[j])) min=abs(a[i]-a[j]);
            }
        } cout<<min<<endl;
    } 
    return 0;
}
