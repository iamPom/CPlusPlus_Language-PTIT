#include <iostream>
#include<math.h>
using namespace std;

int testNto(long long a){
    if (a<2) return 0;
    for(long long i=3;i<=sqrt(a);i+=2){
        if(a%i==0) return 0;
    } 
    return 1;
}
int main (){
    int t;
    long long n,m;
        cin>>t;
    while (t--) {
        cin>>m>>n;
        if(m<=2) cout<<2<<" ";
        if(m%2==0) m++;
        for(long long i=m;i<=n;i+=2){
            if(testNto(i)) cout<<i<<" ";
        } cout<<endl;
    }
    return 0;
}