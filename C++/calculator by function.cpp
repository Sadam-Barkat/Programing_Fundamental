#include<iostream>
using namespace std;

void call(int a,int b,char c){
	
	  if(c== '+'){
	  	int sum=a+b;
	  	cout<<"The Sum is"<<endl<<sum<<endl;
	  }
	  else if(c=='-'){
	  int sub=a-b;
	  	cout<<"The Subtraction is"<<endl<<sub<<endl;
	  }
	  else if(c== '*'){
	  int mul=a*b;
	  	cout<<"The Multipication is"<<endl<<mul<<endl;
	  }
	  else if (c=='/'){
	  int div=a/b;
	  	cout<<"The Division is"<<endl<<div<<endl;
	  }
	  else if(c=='%'){
	  int mod=a%b;
	  	cout<<"The Modulus is"<<endl<<mod<<endl;
	  }
	  else{
	  	cout<<"Invalid"<<endl;
	  }
}

int main(){
	int a,b;
	char c;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	cout<<"Enter the operator:"<<endl;
	cin>>c;
	call(a,b,c);
	return 0;
}
