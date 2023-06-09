#include <iostream>
#include<math.h>
using namespace std;

int main () {
    int t;
    int a[10000];
    long long n,k;
        cin>>t;
    while (t--) {
        int dem=0;
        cin>>n>>k;
        while (n%2==0)
        {
            a[dem]=2;
            n/=2;
            dem++;
        }
        for(long long i=3; i<=sqrt(n); i+=2)
        {
            while (n%i==0){
                a[dem]=i;
                n/=i;
                dem++;
            }
        }
        if(n>1) {
            a[dem]=n;
            dem++;
        }
        if(k>dem) cout<<"-1";
        else cout<<a[k-1];
        cout<<endl;
    }
    return 0;
} 