#include <iostream>
#include <math.h>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n], count=0 ;
        for(long long i=0;i<n;i++) cin>>a[i];                 
        for(long long i=0;i<n;i++){
            for(long long j=n-1;j>i;j--){
                if(k==abs(a[i]-a[j])){
                    count=1;
                    cout<<1<<endl;
                    break;
                }  
            }if(count==1) break;
        } if(count==0) cout<<-1<<endl;
    } 
    return 0;
}
