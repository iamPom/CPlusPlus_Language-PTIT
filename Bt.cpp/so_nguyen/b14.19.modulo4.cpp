#include <iostream>
using namespace std;

int main () {
    int t;
    long long n,k,s=0,a,b;
        cin>>t;
        while (t--){
        s=0;
        cin>>n>>k;
        if(n<k){
            for(int i=1;i<=n;i++){
                s+=i;
            }        
        }else{ if(n>k){ 
            for(int i=1;i<=n;i++){
                s+=(i%k);
            }
        } else{
            for(int i=1;i<n;i++){
                s+=i;
            }
        }
        }
        if(k==s) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}