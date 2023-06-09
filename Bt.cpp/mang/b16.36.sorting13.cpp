#include <bits/stdc++.h>
using namespace std;

int main () {
    long long t,n,m;
    cin>>t;
    while (t--) {
        cin>>n>>m;
        long long a[n],b[n],c[n+m];
        for(long long i=0;i<n;i++)  {
            cin>>a[i];
            c[i]=a[i];
        }
        for(long long i=0;i<m;i++)  {
            cin>>b[i];
            c[n+i]=b[i];
        }
        for(long long i=0;i<n+m;i++){
            for (long long j = n+m-1;j>i; j--){
                if(c[j]<c[j-1]) swap(c[j],c[j-1]);
            }
              
        }
        for(long long j=0;j<n+m;j++) cout<<c[j]<<" ";
        cout<<endl;
    } 
    return 0;
}
