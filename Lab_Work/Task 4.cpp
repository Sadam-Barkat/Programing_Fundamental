#include<iostream>
using namespace std;

int main(){
	int marks;
	cout<<"Enter the marks:";
	cin>>marks;
	
	if(marks<=100&&marks>=80){
		cout<<"A"<<endl;
	}
	else if(marks<=79&&marks>=60){
		cout<<"B"<<endl;
	}
	else if(marks<=59&&marks>=50){
		cout<<"C"<<endl;
	}
	else if(marks<=49&&marks>40){
		cout<<"D"<<endl;
	}
	else if(marks<40){
		cout<<"Fail";
	}
}
