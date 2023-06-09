#include <iostream>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n],count=0;
        for(long long i=0;i<n;i++) cin>>a[i];                   
        for(long long i=0;i<n;i++){
            if(a[i]==k){
                count++;
            }
            if(a[i]>k) break;
        } if(count!=0) cout<<count<<endl;
            else cout<<-1<<endl;   
    } 
    return 0;
}