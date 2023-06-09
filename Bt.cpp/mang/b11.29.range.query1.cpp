#include <iostream>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n],l,r,sum;
        for(long long i=0;i<n;i++) cin>>a[i];                 
        while(k--){
            sum=0;
            cin>>l>>r;
            for(long long j=l-1;j<r;j++) sum+=a[j];
            cout<<sum<<endl;
        }
    } 
    return 0;
}
