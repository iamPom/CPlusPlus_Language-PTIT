#include <iostream>
using namespace std;

long long GCD (long long a, long long b) {
    while (a*b!=0) {
        if (a > b) a %=b;
        else b %= a;
    }
    return a+b;
}
long long LCM(long long a, long long b) {
    return (a*b)/GCD(a,b);
}
int main () {
    long long t,n;
    do{
        cin>>t;
    } while (t<1||t>10000);
    while (t--) {
        cin>>n;
        long long count=1;
        for(long long i = 1;i<=n;i++){
            count=LCM(count,i);
        }
        cout<<count<<endl;
    }
    return 0;
}