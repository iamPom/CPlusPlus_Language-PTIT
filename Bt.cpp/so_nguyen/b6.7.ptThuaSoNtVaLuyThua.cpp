#include <iostream>
#include<math.h>
using namespace std;

int main () {
    int t,dem=0;
    long long n;
        cin>>t;
    while (t--) {
            cin>>n;
        while (n%2==0)
        {
            n/=2;
            dem++;
        }
        if(dem>0){ 
            cout<<2<<" "<<dem<<" ";
            dem=0;
        }
        for (long long i=3; i<=sqrt(n); i+=2)
        {
            while (n%i==0){
                dem++;
                n/=i;
            }
            if(dem>0) {
                cout<<i<<" "<<dem<<" ";
                dem=0;
            }
        }
        if(n>1) cout<<n<<" "<<1;
        cout<<endl;
    }
    return 0;
}