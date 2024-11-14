#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter month number ";
cin>>n;
if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
cout<<"month contain 31 days";
else if(n==4 || n==6 || n==9 || n==11) 
cout<<"month is equal to 30 days "<<endl;
else 
cout<<"28 days"	;
	
	
	
	
	
	
}
