#include<iostream>
using namespace std; 

//Function prototype
//type function name(arguments);
//int sum(int a,int b).....Acceptable
//int sum(int a,b)....Not Acceptable
//int sum(int ,int)......Acceptable
int sum(int , int);

int main(){
	int a,b;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	
	cout<<"The sum is:"<<sum(a,b);
	return 0;
}
int sum(int a, int b){
	int z=a+b;
	return z;
}
