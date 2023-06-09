#include<iostream>
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
int main(){
	long long a, b,i,min,max;
	do
    {
        cin>>a>>b;
    } while (a<0||b<0);
    max=b;
    min=a; 
    if(a>b){
        max=a;
        min=b;
    } 
    if(min<=2) cout<<2<<" ";
    if( min<3) i=3;
    else i=min;
    for(i;i<=max;i+=2){
        if(testNto(i)) cout<<i<<" ";
        if (i%2==0) i--;
    }
	return 0;
}