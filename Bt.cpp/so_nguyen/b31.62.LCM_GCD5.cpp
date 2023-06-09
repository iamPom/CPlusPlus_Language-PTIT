#include <iostream>
using namespace std;

long long GCD (long long a, long long b) {
    if(a==0||b==0) return a+b;
    if(a>=b){
        return GCD(a%b,b);
    }
    else return GCD(a, b%a);
}
int main () {
    long long t,a,x,y;
    cin>>t;
    while (t--) {
        cin>>a>>x>>y;
        long long b=GCD(x,y);
        for(int i=0;i<b;i++){
            cout<<a;
        }
        cout<<endl; 
    } 
    return 0;
}
