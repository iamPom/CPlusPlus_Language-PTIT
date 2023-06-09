#include <iostream>
#include<math.h>
using namespace std;

int main () {
    int t;
    long long n;
        cin>>t;
    while (t--) {
            cin>>n;
        while (n%2==0)
        {
            n/=2;
        } if(n==1) cout<<2;
        for (long long i=3; i<=sqrt(n); i+=2)
        {
            while (n%i==0){
                n/=i;
            }
            if(n==1) cout<<i;
        }
        if(n>1) cout<<n;
        cout<<endl;
    }
    return 0;
}