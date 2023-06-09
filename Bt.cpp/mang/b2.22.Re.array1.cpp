#include <bits/stdc++.h>
using namespace std;

int main () {
    long long t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n],b[n];
        for(long long i=0;i<n;i++){
            cin>>b[i];
            a[i]=-1;
        }
        for(long long i=0;i<n;i++){
            if(b[i]<n&&b[i]>=0) a[b[i]]=b[i];  
        }
        for(long long j=0;j<n;j++) cout<<a[j]<<" ";
        cout<<endl;
    } 
    return 0;
}
