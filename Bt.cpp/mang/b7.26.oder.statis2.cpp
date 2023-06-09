#include <iostream>
using namespace std;
int main () {
    long long t,n,max;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n];
        max=0;
        for(long long i=0;i<n;i++) cin>>a[i];                   
        for(long long i=0;i<n;i++){
            if(a[i]>max) max=a[i];
        }
        cout<<max<<endl;
    } 
    return 0;
}
