#include <iostream>
using namespace std;

int main () {
    int t;
    long long x,y,p,n,d;
        cin>>t;
        while (t--) {
        n=1;
        cin>>x>>y>>p;
        d=1; 
        n=(x%p);
        while(y--){
            d=(d*n)%p;
        }
        cout<<d<<endl;
    }
    return 0;
}