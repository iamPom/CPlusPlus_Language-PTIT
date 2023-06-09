#include <iostream>
#include<math.h>
using namespace std;

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
int main (){
    int t;
    long long n;
        cin>>t;
    while (t--) {
        cin>>n;
        cout<<2<<" ";
        for (long long i=3; i<=n; i+=2)
        {
            if(testNto(i)) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}