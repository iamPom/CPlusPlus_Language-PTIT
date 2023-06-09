#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool test(ll a[], ll l, ll r){
	bool check=false;
	int x=1;
	for(ll i=l+1;i<=r;i++){
		if(a[i]<a[i-1]&&check==false) return false;
		if(a[i]>a[i-1]&&x==1){
			check= true;
			continue;
		}
		if(a[i]<a[i-1]&&check==true){
			x=0;
			continue;
		} 
		if(a[i]>a[i-1]&&x==0) return false;
	} return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){   
		ll n;
		cin>>n;
		ll a[n],l,r;
		for(ll i=0;i<n;i++) cin>>a[i];
		cin>>l>>r;
		if(test(a,l,r)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
    }
    return 0;
}
