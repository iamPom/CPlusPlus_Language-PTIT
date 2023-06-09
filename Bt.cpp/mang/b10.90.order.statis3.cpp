#include <iostream>
using namespace std;
int main () {
    long long t,n,k;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long a[n][n],b[n*n],c=0;
        for(long long i=0;i<n;i++){
            for(long long j=0;j<n;j++){
                cin>>a[i][j];
                b[c]=a[i][j];
                c++;
            }
        }                 
        for(long long j=0;j<n*n;j++){
            for(long long i=n*n-1;i>j;i--){
                if(b[i]<b[i-1]){
                    swap(b[i],b[i-1]);
                }
            }
        }
        cout<<b[k-1]<<endl;
    } 
    return 0;
}
