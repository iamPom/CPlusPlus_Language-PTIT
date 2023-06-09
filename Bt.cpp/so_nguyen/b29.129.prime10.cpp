#include <iostream>
#include<math.h>
using namespace std;

int tongCso(long long n){
    long long a=0;
    while(n>0){  
        a+=n%10;
        n/=10;
    }
    return a;
}
int testNto(long long a){
    if(a==2) return 1;
    if (a<2||a%2==0) return 0;
    for(long long i=3;i<=sqrt(a);i+=2){
        if(a%i==0) return 0;
    } 
    return 1;
}
int main () {
    int t;
    long long n;
        cin>>t;
    while (t--) {
        long long sumCso=0 , sum=0;
        cin>>n;
        if(testNto(n)){
            cout<<"NO"<<endl;
            continue;
        }
        long long m=n;
        sumCso=tongCso(m);
         while (n%2==0){
            sum+=2;
            n/=2;
        }
        for (long long i=3; i<=sqrt(n); i+=2){
            while (n%i==0){
                sum+=tongCso(i);
                n/=i;
            }
        }
          if(n>1) sum+=tongCso(n);
        if(sum==sumCso) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}   