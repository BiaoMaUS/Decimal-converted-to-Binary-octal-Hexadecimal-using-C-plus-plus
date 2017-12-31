#include <iostream>
#include <sstream>
#include <iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(int argc, char** argv) {
int   u,  n;
long double m,f;
cout<<"enter a value:"<<endl;

cin>>m;
cout<<"choose a base,Hexadecimal is 16, o is 8, B is 2"<<endl;
cin>>u;
n= int(m);
if (n==0)
cout<<0;


f=m-n;


	int i,h,k;
	 int a[100];
	
	
for(i=0;i<100
;i++){
if	(pow(u, i)>n){

     h=i-1;
     break;
 }
if  ( pow(u,i)==n)
{

     h=i;
     break;
 }
}
	for( k=h; k>=0;k--){
	
	a[k]=n%u;
	n=n/u;
	
}
for (int  d=(0);d<=h;d++){
	switch(a[d]){
		case 0: cout<<0; break;
		case 1: cout<<1; break;
		case 2: cout<<2; break;
		case 3: cout<<3; break;
		case 4: cout<<4; break;
		case 5: cout<<5; break;
		case 6: cout<<6; break;
		case 7: cout<<7; break;
		case 8: cout<<8; break;
		case 9: cout<<9; break;
		case 10: cout<<"A"; break;
		case 11: cout<<"B"; break;
		case 12: cout<<"C"; break;
		case 13: cout<<"D"; break;
		case 14: cout<<"E"; break;
		case 15: cout<<"F"; break;
		default:cout<<0;break;
	}


}
if (f==0)
exit(0);

cout<<".";

int w,j,l;

for(w=-1;w>-10;w--){
	for(j=0;j<u;j++){
		if(j*pow(u,w)>f){
			l=j-1;
			f=f-(l*pow(u,w));
			switch(l){
		case 0: cout<<0; break;
		case 1: cout<<1; break;
		case 2: cout<<2; break;
		case 3: cout<<3; break;
		case 4: cout<<4; break;
		case 5: cout<<5; break;
		case 6: cout<<6; break;
		case 7: cout<<7; break;
		case 8: cout<<8; break;
		case 9: cout<<9; break;
		case 10: cout<<"A"; break;
		case 11: cout<<"B"; break;
		case 12: cout<<"C"; break;
		case 13: cout<<"D"; break;
		case 14: cout<<"E"; break;
		case 15: cout<<"F"; break;
		}	
		
			break;
		}
		if((j*pow(u,w))==f){
			l=j;
			switch(l){
		case 0: cout<<0;break;
		case 1: cout<<1; break;
		case 2: cout<<2; break;
		case 3: cout<<3; break;
		case 4: cout<<4; break;
		case 5: cout<<5; break;
		case 6: cout<<6; break;
		case 7: cout<<7; break;
		case 8: cout<<8; break;
		case 9: cout<<9; break;
		case 10: cout<<"A"; break;
		case 11: cout<<"B"; break;
		case 12: cout<<"C"; break;
		case 13: cout<<"D"; break;
		case 14: cout<<"E"; break;
		case 15: cout<<"F"; break;
	}
			
			exit(0);
		}
	}
	
}
	return 0;
}


