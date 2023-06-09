#include <iostream>
using namespace std;
int main () {
    long long t,n,m,max,min;
    cin>>t;
    while (t--) {
        cin>>n>>m;
        long long a[n],b[m];
        max=0;
        min=100000000;
        for(long long i=0;i<n;i++) cin>>a[i];    
        for(long long i=0;i<n;i++) cin>>b[i];               
        for(long long i=0;i<n;i++){
            if(a[i]>max) max=a[i];
        }
        for(long long i=0;i<n;i++){
            if(b[i]<min) min=b[i];
        }
        cout<<max*min<<endl;
    } 
    return 0;
}
