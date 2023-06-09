#include <iostream>
#include<math.h>
using namespace std;

int main () {
    int t;
    long long n,count,dem;
        cin>>t;
    while (t--) {
        cin>>n;
        count=0;
        dem=0;
        while (n%2==0)
        {
            n/=2;
            count++;
        }
        if(count>1){
            cout<<0<<endl;
            continue;
        }
        for (long long i=3; i<=sqrt(n); i+=2)
        {
            while (n%i==0){
                n/=i;
                count++;
                dem++;
            } if(dem>1){
                break;
            } dem=0;
        }
        if(dem>1){
            cout<<0<<endl;
            continue;
        }
        if(n>1) count++;
        if(count==3) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}