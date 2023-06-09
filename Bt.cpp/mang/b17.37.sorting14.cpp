#include <bits/stdc++.h>
using namespace std;

int main () {
    long long t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n],count=0,b=1;
        for(long long i=0;i<n;i++)cin>>a[i];
        for(long long i=0;i<n;i++){   
            for (long long j = n-1;j>i; j--){
                if(a[j]<a[j-1]) swap(a[j],a[j-1]);
            }      
        }
        for(long long j=1;j<n;j++){
            if(a[j]-a[j-1]>1){
                count+=a[j]-a[j-1]-1;
            }
        
        }
        cout<<count<<endl;
    } 
    return 0;
}
