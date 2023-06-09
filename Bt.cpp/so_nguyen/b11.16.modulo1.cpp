#include <iostream>
using namespace std;

int main () {
    int t;
    long long x,y,p,n;
        cin>>t;
        while (t--) {
        n=1;    
        cin>>x>>y>>p;
        while(y--){
            n=(n*x)%p;
        }
        cout<<n<<endl;
    }
    return 0;
}