#include <iostream>
using namespace std;

int minMax(int a, int b){
    int m=a,s=b;
    if(s==0){
       (m==1)?cout<<"0 0": cout<<"-1 -1";
       return 0;
    }
    if(s>9*m){
        cout<<"-1 -1";
        return 0;
    }
    int min[m],max[m];
    s--;
    for(int i=m-1;i>0;i--){
        if(s>9){
            min[i]=9;
            s-=9;
        }
        else{
            min[i]=s;
            s=0;
        }
    }
    min[0]=s+1;
    for(int i=0;i<m;i++){
        cout<<min[i];
    }
    cout<<" ";
    m=a;
    s=b;
    for(int i=0;i<m;i++){
        if(s>9){
            max[i]=9;
            s-=9;
        }
        else{
            max[i]=s;
            s=0;
        }
    }
    for(int i=0;i<m;i++){
        cout<<max[i];
    }
    return 0;
}
int main () {
    long long m,s;
    cin>>m>>s;
    minMax(m,s);
    return 0;
}