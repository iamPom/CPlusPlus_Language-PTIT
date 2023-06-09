#include <iostream>
#include <math.h>
using namespace std;

long long GCD (long long a, long long b) {
    while (a*b!=0) {
        if (a > b) a %=b;
        else b %= a;
    }
    return a+b;
}
int testNto(long long a){
    if(a==2) return 1;
    else{
        if(a<2||a%2==0) return 0;
        else{
        for(long long i=3;i<=sqrt(a);i+=2){
            if(a%i==0) return 0;
        }
        } 
    }
    return 1;
}
int main () {
    long long t,n;
    cin>>t;
    while(t--){
        long long count=1;
        cin>>n;
        for(int i=2;i<=n;i++){
            if(GCD(i,n)==1){
                count++;
            }
        }
        if(testNto(count)){
            cout<<1<<endl;
        } else cout<<0<<endl;
    }
    return 0;
}