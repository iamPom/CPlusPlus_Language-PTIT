#include <iostream>
using namespace std;

int main () {
    int t;
    long long a,m,count=0;
        cin>>t;
        while (t--){
        count=0;
        cin>>a>>m;
        for(int i=1;i<m;i++){
            if((i*a)%m==1){
                count++;
                cout<<i<<endl;
                break;
            }
        }
        if(count==0) cout<<"-1"<<endl;
    }
    return 0;
}