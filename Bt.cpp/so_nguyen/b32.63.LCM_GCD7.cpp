#include <iostream>
#include<math.h>
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
    long long t,x,y,z,n,a;
    cin>>t;
    while (t--) {
        cin>>x>>y>>z>>n;
        a=LCM(LCM(x,y),z);
        long long b=pow(10,n-1);
        long long c=(b/a)+1;
        if(b%a==0){
            cout<<b<<endl;
        } else{
            if(a*c<pow(10,n)){
                cout<<a*c<<endl;
            } else cout<<-1<<endl;
        }
        
    } 
    return 0;
}
