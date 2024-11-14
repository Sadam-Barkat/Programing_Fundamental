//write c++ program that reads three values and print the largest one

#include<iostream>
using namespace std;

int main(){
	int num1,num2,num3;
	cout<<"enter the first no:";
	cin>>num1;
	cout<<"enter the second no:";
	cin>>num2;
	cout<<"enter the third no:";
	cin>>num3;
	
	if(num1>num2&&num1>num3){
		cout<<"Largest num:"<<num1;
	}
	else if(num2>num1&&num2>num3){
		cout<<"Largest num:"<<num2;
	}
	else if(num3>num1&&num3>num2){
		cout<<"Largest num:"<<num3;
	}
	else{
		cout<<"All are equal";
	}
}
