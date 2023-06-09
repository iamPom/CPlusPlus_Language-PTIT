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
    long long l,r;
        cin>>t;
    while (t--) {
        long long count=0;
        cin>>l>>r;
        if(l<4) count++;
        if(l%2==0) l++;
        for(long long i=l;i*i<=r;i+=2){
            if(testNto(i)) {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}