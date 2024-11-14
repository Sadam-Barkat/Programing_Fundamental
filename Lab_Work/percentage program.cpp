#include<iostream>
using namespace std;

int main(){
	
	int a,b,c,d,e,f,z;
	float p;
	cout<<"enter the suhject marks:";
	cin>>a;
	cout<<"enter the 2nd suhject marks:"; 
	cin>>b;
	cout<<"enter the 3rd suhject marks:";
	cin>>c;
	cout<<"enter the 4th suhject marks:";
	cin>>d;
	cout<<"enter the 5th suhject marks:";
	cin>>e;
	cout<<"enter the 6th suhject marks:";
	cin>>f;
	
	z=a+b+c+d+e+f;
	
	cout<<"total marks:"<<z<<endl;
	p	=z*100/520;
	cout<<"percentage:"<<p;
}
