#include <iostream>
using namespace std;
int main () {
    long long t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n],count=0;
        for(long long i=0;i<n;i++) cin>>a[i];                   
        for(long long i=1;i<n;i++){
            for(long long j=0;j<i;j++){
                if(a[i]==a[j]){
                    count=1;
                    cout<<a[i]<<endl;
                    break;
                }  
            }if(count==1) break;
        }
            if(count==0) cout<<-1<<endl;   
    } 
    return 0;
}