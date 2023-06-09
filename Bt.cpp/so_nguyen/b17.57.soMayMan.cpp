#include <iostream>
using namespace std;

int lucky(int n){   
    int i=2;
    while(i--){
        int a=n%10;
        if(i==1&&a!=6) return 0;
        if(i==0&&a!=8) return 0;
        n/=10;
    }
    return 1;
}
int main () {
    int t;
    long long n;
        cin>>t;
    while (t--) {
        cin>>n;
        if(lucky(n)){
            cout<<"1"<<endl;
        }else cout<<"0"<<endl;      
    }
    return 0;
}