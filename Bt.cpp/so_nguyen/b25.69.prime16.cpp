#include <iostream>
#include<math.h>
using namespace std;

int testNto(long long a){
    if(a<2) return 0;
    else{
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0) return 0;
        }
    } return 1;
}
int main () {
    int t;
    long long n;
        cin>>t;
    while (t--) {
        long long count=0;
        cin>>n;
        if(n>=4) count++;
        for(long long i=3;i*i<=n;i+=2){
            if(testNto(i)) {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}