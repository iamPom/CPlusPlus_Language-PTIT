#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100];
	cin.getline(a,199);
	int i,count=0,n=strlen(a);
	strlwr(a);
	for(i=0;i<n;i++){
		if((a[i]!=' '&&a[i+1]==' ')||(a[i]!=' '&&a[i+1]!=' '&&i+1==n-1)) count++;
	}
	
	char b[100][100];
	char *p=strtok(a," ");

	while(p!=0){
		for(i=1;i<=count;i++){
			if(i<count) strncpy(b[i],p,1);
			else 
			strcpy(b[count],p);	
			p=strtok(NULL," ");		
		}p=strtok(NULL," ");
	}
	cout<<b[count];
	for(i=1;i<count;i++){
			 cout<<b[i];
		}
		cout<<"@ptit.edu.vn";
	return 0;
}