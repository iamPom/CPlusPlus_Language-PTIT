#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
    if(!a)
        return b;
    return gcd(b%a,a);
}
ll giamB(ll a, char b[])
{
    ll du=0;
    for(int i=0;i<strlen(b);i++)
        du=(du*10+b[i]-'0')%a;
    return du;
}
ll gcdSoLon(ll a,char b[])
{   
    return gcd(a,giamB(a,b));
}
int main(){
    ll t, a;
    char b[250];
    cin>>t;
    while(t--)
    {   cin>>a>>b;
        cout<<gcdSoLon(a,b)<<endl;
    }
    return 0;
}