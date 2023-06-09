#include <iostream>
using namespace std;

long long GCD (long long a, long long b) {
    if(a==0||b==0) return a+b;
    if(a>=b){
        return GCD(a%b,b);
    }
    else return GCD(a, b%a);
}
long long LCM(long long a, long long b) {
    return (a*b)/GCD(a,b);
}
int main () {
    long long t,a,b;
    cin>>t;
    while (t--) {
        cin>>a>>b;
        cout<<LCM(a,b)<<" "<<GCD(a,b)<<endl;
    }
    return 0;
}
