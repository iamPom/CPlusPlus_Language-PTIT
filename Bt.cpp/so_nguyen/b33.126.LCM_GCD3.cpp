#include <iostream>
#include<math.h>
using namespace std;
#define modulo 1000000007;

unsigned long long int GCD (unsigned long long int a, unsigned long long int b) {
    if(a==0||b==0) return a+b;
    if(a>=b){
        return GCD(a%b,b);
    }
    else return GCD(a, b%a);
}
int main () {
    unsigned long long int t,n,h=1;
    cin>>t;
    while (t--) {
        cin>>n;
        unsigned long long int a[n];
        for(int i=0;i<n;i++){
           cin>>a[i];
       }unsigned long long int g=a[0];
        for(int j=1;j<n;j++){
            g=GCD(g,a[j]);
        }unsigned long long int c=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<g;j++){
                c=(c*a[i])%modulo;
            }  
        }
        cout<<c<<endl;
    } 
    return 0;
}