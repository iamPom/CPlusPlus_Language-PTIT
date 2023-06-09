#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t, a;
    char b[1000];
    cin>>t;
    while(t--)
    {   cin>>b>>a;
        ll du=0;
        for(int i=0;i<strlen(b);i++)
            du=(du*10+b[i]-'0')%a;
                cout<<du<<endl;
    }
    return 0;
}
