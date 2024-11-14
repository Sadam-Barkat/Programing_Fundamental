#include<iostream>
using namespace std;

int main(){
	 int a,b,c,fibnachi;
	     b=1;
	     c=1;
	     
	     cout<<"Enter the number:";
	     cin>>a;
	     
	     for(int i=0; i<=a; i++ ){
	     	 cout<<b<<",";
	     	 fibnachi=b+c;
	     	 b=c;
	     	 c=fibnachi;
		 }
}
