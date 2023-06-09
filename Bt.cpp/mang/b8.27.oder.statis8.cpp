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
        if(n%2==0){
            max=a[n/2-1];
            if (a[n/2]>max) max= a[n/2];
        }else {
            max= a[n/2-1];
            if(a[n/2]>max) max =a[n/2];
            if(a[n/2+1]>max) max =a[n/2+1];
        }
        cout<<max<<endl;
    } 
    return 0;
}
