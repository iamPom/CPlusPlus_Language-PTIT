#include <iostream>
using namespace std;

int main () {
    int t;
    long long m,n,a,b;
        cin>>t;
    while (t--) {
        long long count=0;
        cin>>m>>n>>a>>b;
        for(long long i=m;i<=n;i++){
            if(i%a==0||i%b==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}