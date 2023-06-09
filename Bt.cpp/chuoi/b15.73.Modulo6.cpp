#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){   
		ll b,m;
		string a;
		cin>>a>>b>>m;
        ll du=0,sum=1;
        for(int i=0;i<a.length();i++)
            du=(du*10+(a[i]-'0'))%m;
        for(int i=0;i<b;i++){
        	sum =(sum*du)%m;
		}
        cout<<sum<<endl;
    }
    return 0;
}
