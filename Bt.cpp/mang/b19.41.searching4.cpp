#include <iostream>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];                   
        for(long long i=0;i<n;i++){
            if(a[i]==k){
                cout<<i+1<<endl;
                break;
            }
        }   
    } 
    return 0;
}