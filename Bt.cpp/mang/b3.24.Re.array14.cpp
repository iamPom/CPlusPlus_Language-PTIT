#include <bits/stdc++.h>
using namespace std;

int main () {
    long long t,k,n;
    cin>>t;
    while (t--) {
        cin>>k>>n;
        long long a[n*k];
        for(long long i=0;i<n*k;i++){
            cin>>a[i];
        }
        for(long long i=0;i<n*k;i++){
            for (long long j = n*k-1;j>i; j--){
                if(a[j]<a[j-1]) swap(a[j],a[j-1]);
            }
              
        }
        for(long long j=0;j<n*k;j++) cout<<a[j]<<" ";
        cout<<endl;
    } 
    return 0;
}
