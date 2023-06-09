#include <bits/stdc++.h>
using namespace std;

int main () {
    long long t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n],b[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        b[0]=a[1]*a[0];
        b[n-1]=a[n-2]*a[n-1];
        for(long long j=1;j<n-1;j++){
            b[j]=a[j-1]*a[j+1];
        }
        for(long long i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    } 
    return 0;
}
