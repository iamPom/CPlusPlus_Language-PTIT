#include <bits/stdc++.h>
using namespace std;

int main () {
    long long t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n],count=0;
        for(long long i=0;i<n;i++) cin>>a[i];
        for(long long j=0;j<n;j++){
            if(a[j]!=0){
                if(a[j]==a[j+1]) {
                    cout<<2*a[j]<<" ";
                    a[j+1]=0;
                }else cout<<a[j]<<" ";
            }
            else count++;
        }
        for(long long i=0;i<count;i++) cout<<0<<" ";
        cout<<endl;
    } 
    return 0;
}
