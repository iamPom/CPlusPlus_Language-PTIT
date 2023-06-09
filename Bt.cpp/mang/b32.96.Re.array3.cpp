#include <iostream>
#include<math.h>
using namespace std;

int testNto(long long a){
    if(a==2) return 1;
    if (a<2||a%2==0) return 0;
    for(long long i=3;i<=sqrt(a);i+=2){
        if(a%i==0) return 0;
    } 
    return 1;
}
int main (){
    long long t,n,m;
        cin>>t;
    while (t--) {
        cin>>n>>m;
        long long count=0;
        if(n<=2) count++;
        if(n%2==0) n++;
        for(long long i=n;i<=m;i+=2){
            if(testNto(i)==1) count++;
        } cout<<count<<endl;
    }
    return 0;
}




