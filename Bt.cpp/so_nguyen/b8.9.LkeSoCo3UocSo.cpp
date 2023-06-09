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
        int dem=0;
        cin>>n;
        if(n>=4) cout<<4<<" ";
        for(long long i=3;i*i<=n;i+=2){
            if(testNto(i)) {
                cout<<i*i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}