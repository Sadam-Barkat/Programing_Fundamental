#include<iostream>
using namespace std;

void fun1();
void fun2();

int main(){
	fun1();
	fun2();
	return 0;
}
void fun1(){
	cout<<"This is function no one"<<endl;
}
void fun2(){
	cout<<"This is function no two"<<endl;
}
