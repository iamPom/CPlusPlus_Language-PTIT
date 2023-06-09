#include <iostream>
using namespace std;

int main () {
    int t;  
    unsigned long long int n,f0,f1,fn;
        cin>>t;
        while (t--){
        f0=0;
        f1=1;
        cin>>n;
        if(n==0){
            cout<<0<<endl;
            continue;
        }
        if(n==1||n==2){
            cout<<1<<endl;
            continue;
        } 
        for(int i=1;i<n;i++){
            fn=(f0%1000000007+f1%1000000007)%1000000007;
            f0=f1%1000000007;
            f1=fn;
        } cout<<fn<<endl;
    }
    return 0;
}