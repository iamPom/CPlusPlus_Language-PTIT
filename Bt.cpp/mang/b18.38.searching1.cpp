#include <bits/stdc++.h>
using namespace std;

int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n],count=-2;
        for(long long i=0;i<n;i++)cin>>a[i];
        for(long long i=0;i<n;i++){   
            if (a[i]==k){
                count=i;
                break;
            }      
        }
        cout<<count+1<<endl;
    } 
    return 0;
}
