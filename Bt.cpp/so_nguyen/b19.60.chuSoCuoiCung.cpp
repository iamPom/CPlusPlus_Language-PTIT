#include <iostream>
using namespace std;

int main () {
    long long t,n,a;
        cin>>t;
    while (t--) {
        a=0;
        cin>>n;
        while(n>0){
            a+=n%10;
            n/=10;
            if(n==0&&a>9){
                n=a;
                a=0;
            }
        } cout<<a<<endl;
    }
    return 0;
}