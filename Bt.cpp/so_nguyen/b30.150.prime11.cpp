#include <iostream>
#include<math.h>
using namespace std;

int isPrime(long long a){
    if(a==2) return 1;
    if (a<2||a%2==0) return 0;
    for(long long i=3;i<=sqrt(a);i+=2){
        if(a%i==0) return 0;
    } 
    return 1;
}
int isPerfect(unsigned long long int n){
    for(int i = 2; i < 20; ++i) {
            if(isPrime(i) && isPrime(pow(2, i)-1)){
                if(pow(2, 2*i)-pow(2, i) == 2*n){
                    return 1;
                }
            }
        }
    return 0;
}
int main () {
    int t;
    unsigned long long int n;
        cin>>t;
    while (t--) {  
        cin>>n;
        if(n%2==1||n<=2){
            cout<<0<<endl;
            continue;
        }
        if(isPerfect(n)){
            cout<<1<<endl;
        } else cout<<0<<endl;
    }
    return 0;
}   