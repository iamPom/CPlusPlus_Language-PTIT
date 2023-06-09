#include <iostream>
using namespace std;
int main () {
    long long t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n], min=10000000,min2=10000000;
        for(long long i=0;i<n;i++) cin>>a[i];                   
        for(long long i=0;i<n;i++){
            if(a[i]<min) min=a[i];
        }
        for(long long i=0;i<n;i++){
            if(a[i]<min2&&a[i]>min) min2=a[i];
        }
        if(min2==10000000) cout<<-1<<endl;
        else cout<<min<<" "<<min2<<endl;
    } 
    return 0;
}
