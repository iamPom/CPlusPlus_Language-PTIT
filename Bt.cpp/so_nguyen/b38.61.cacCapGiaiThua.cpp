#include <iostream>
using namespace std;

int main () {
    long long t,n,a,k;
        cin>>t;
    while (t--) {
        cin>>k>>n;
        long long count2=0,count5=0,count3=0,count7=0;
        while(n>0){
            a=n%10;
            n/=10;
            if(a==2){
                count2++;
            }
            if(a==3){
                count3++;
            }
            if(a==4){
                count2+=2;
                count3++;
            }
            if(a==5){
                count5++;
            }
            if(a==6){
                count5++;
                count3++;
            }
            if(a==7){
                count7++;
            }
            if(a==8){
                count2+=3.3;
                count7++;
            }
            if(a==9){
                count2+=1;
                count3+=2;
                count7++;
            }    
        } 
        for(long long i=0;i<count7;i++) cout<<7;
        for(long long i=0;i<count5;i++) cout<<5;
        for(long long i=0;i<count3;i++) cout<<3;
        for(long long i=0;i<count2;i++) cout<<2;
        cout<<endl;
    }
    return 0;
}