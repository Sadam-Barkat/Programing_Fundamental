#include<iostream>
using namespace std;

int main(){
	//Q:What is Pointers?
	//Ans:It is a data type which holds the address of other data types
	
	int a=3;
	int*b=&a;//Now b is a pointer which store the address of operator a
	
	//&----->Address of operator:
	cout<<"Address of a is : "<<b<<endl;
	cout<<"Address of a is : "<<&a<<endl;
	
	//*----->(Value at) Dereference operator:
	cout<<"The value store at b is : "<<*b<<endl;
	
	//Pointer to pointer:
	int**c=&b;//address of b store in new pointer c
	cout<<"The address of pointer b is : "<<c<<endl;
	cout<<"The address of pointer b is : "<<&b<<endl;
	cout<<"The address of pointer b is : "<<*c<<endl;
	cout<<"The value store in b is : "<<**c<<endl;
	cout<<"The value store in b is : "<<*b<<endl;
	
	
	
	return 0;
}
