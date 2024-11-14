#include<iostream>
using namespace std;

int main(){
	  int n,x,y,z;
	  x=0; 
	  y=1;
	  cout<<"Enter the number:";
	  cin>>n;
	  while(z<=n){
	  	cout<<z<<",";
	    z=x+y; 
	  	x=y;
	  	y=z;
	  	
	  }
}
