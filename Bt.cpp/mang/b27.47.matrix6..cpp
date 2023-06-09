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
            for(long long j=0;j<n;j++){
                if(i==0||j==0||i==n-1||j==n-1) cout<<a[i][j]<<" ";
                else cout<<"  ";
            }cout<<endl;
        }
    } 
    return 0;
}
