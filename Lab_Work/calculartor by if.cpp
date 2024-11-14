#include<iostream>
using namespace std;

int main(){
	float a,b,x;
	int d,m,y;
	char c;
	
	cout<<"enter first no:";
	cin>>a,d;
	cout<<"enter operation:";
	cin>>c;
	cout<<"enter second no:";
	cin>>b,m;
	
	if(c=='+'){
		x=a+b;
		cout<<"Addition:"<<x;
	}
	else if(c=='-'){
		x=a-b;
		cout<<"Subtraction:"<<x;
	}
	else if(c=='*'){
		x=a*b;
		cout<<"Multiplication:"<<x;
	}
	else if(c=='%'){
		y=d%m;
    	cout<<"Modulus:"<<y;
	}
	else if(c=='/'&&b!=0){
		x=a/b;
		cout<<"Division:"<<x;
	}
	else{
		cout<<"undefined";
		system("pause");
	}
}
