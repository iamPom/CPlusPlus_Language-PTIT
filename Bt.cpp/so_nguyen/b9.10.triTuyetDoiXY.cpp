#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main () {
    int t;
        cin>>t;
    while (t--) {
        char a[1000];
        char *ptr;
        char b[1000];
        char *hsb;
        gets(a);
        cout<<endl;
        gets(b);
        int c,d;
        c=strtod(a,&ptr);
        d=strtod(b,&hsb);
        cout<<c<<" "<<d;
        cout<<endl;
    //    if(c>d){cout<<a-b<<endl;}
    //    else{cout<<0<<b-a<<endl;}
    }
    return 0;
}