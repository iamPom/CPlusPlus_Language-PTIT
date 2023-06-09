#include <iostream>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n][n];
        for(long long i=0;i<n;i++)
            for(long long j=0;j<n;j++) cin>>a[i][j];                 
        for(long long i=0;i<n;i++){
            if(i%2==0){
                for(long long j=0;j<n;j++) cout<<a[i][j]<<" ";
            } else for(long long j=n-1;j>=0;j--) cout<<a[i][j]<<" ";   
        } cout<<endl;
    } 
    return 0;
}
