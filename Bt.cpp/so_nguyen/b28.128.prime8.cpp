#include <iostream>
using namespace std;

int main () {
    int t;
    long long n,p;
        cin>>t;
    while (t--) {
        long long sum=0;
        cin>>n>>p;
        if(p>n){
            cout<<0<<endl;
            continue;
        }
        for(long long i=p;i<=n;i*=p){
            sum +=n/i;
        }    
        cout<<sum<<endl;
    }
    return 0;
}   