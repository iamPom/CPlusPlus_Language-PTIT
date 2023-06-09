#include <iostream>
#include<math.h>
using namespace std;

int testNto(long long a){
    if(a%2==0) return 0;
    if(a<2) return 0;
    for(long long i=3;i<=sqrt(a);i+=2){
        if(a%i==0) return 0;
    } 
    return 1;
}
int main (){
    int t;
    long long n;
        cin>>t;
    while (t--) {
        cin>>n;
        long long a=3,b=n-3;
        if(n%2==1&&testNto(n-2)==1){
            cout<<2<<" "<<n-2<<endl;
            continue;
        }
        if(n==4){
            cout<<"2 2"<<endl;
        } else{
            while(a<=b){
                if(testNto(a)==1&&testNto(b)==1){
                    cout<<a<<" "<<b<<endl;
                    break;
                }
                a+=2;
                b-=2;    
            }    
        } 
    }
    return 0;
}