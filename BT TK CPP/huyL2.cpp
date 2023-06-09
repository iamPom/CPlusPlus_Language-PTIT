#include<iostream>
#include<string>
using namespace std;
void REEVE(){
	string a,b,s = "";// NOTE
	cin>>a>>b;//
    while(a.length() < b.length()) a="0"+a;// NOTE
    while(b.length() < a.length()) b="0"+b;//
    int carry = 0; //NOTE
    for(int i=a.length()-1 ;i >=0 ;i--){
        int sum = a[i]- '0' + b[i]-'0' + carry;
        carry = sum/10;
        s = char(sum%10+'0')+s;
    }
    if(carry > 0) s= "1" + s;// NOTE 
	cout<<s<<endl;	//198123
}
int main(){
    int t=1; 
    cin>>t; 
    while(t--)REEVE();
    return 0;
}
