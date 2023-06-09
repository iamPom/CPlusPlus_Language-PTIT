#include <iostream>
using namespace std;
int main () {
    long long t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n],count=0;
        for(long long i=0;i<n;i++) cin>>a[i];                   
        for(long long i=1;i<1000000;i++){
            for(long long j=0;j<n;j++){
                if(a[j]==i){
                    count=1;
                    break;
                }
            }
            if(count==0){
                cout<<i<<endl;
                break;
            }
            count = 0;
        }   
    } 
    return 0;
}
