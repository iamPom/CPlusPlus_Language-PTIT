#include <iostream>
using namespace std;

int main () {
    int t;
    long long m,n;
        cin>>t;
    while (t--) {
        cin>>m;
        cout<<1<<" ";
        if(m==1) break;
        if(m==2){
            cout<<2<<endl;
            break;
        } else cout<<2<<" ";
        for(n=3;n<=m;n+=2){
            for(int i=3;i<=n;i+=2){
                if(n%i==0) {
                    cout<<i<<" ";
                    break;
                }    
            }
            if(n<m) cout<<2<<" "; 
        } cout<<endl;      
    }
    return 0;
}