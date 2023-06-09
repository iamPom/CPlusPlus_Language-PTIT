#include <iostream>
using namespace std;
int main () {
    long long t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n],max=0;
        for(long long i=0;i<n;i++) cin>>a[i];                 
        for(long long i=n-1;i>0;i--){
            for(long long j=0;j<i;j++){
                if(a[i]-a[j]>max) max=a[i]-a[j];
            }
        } if(max>0) cout<<max<<endl;
        else cout<<-1<<endl;
        
    } 
    return 0;
}
