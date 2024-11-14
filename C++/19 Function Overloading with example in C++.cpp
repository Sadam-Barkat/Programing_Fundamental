//Function Overloading:
//Same name but perameter list changes 
//1.No of peremeters 
//2.Type of peremeters
//3.Sequence of peremeters

#include<iostream>
using namespace std;

int sum(int a, int b){
	return a+b;
}
int sum(int a,int b, int c){
	return a+b+c;
}
//Caluculate Volume of Cylinder:
int volume(double r,int h){
	return(3.14*r*r*h);
}
//Calculate Volume of Cube:
int volume(int a){
	return(a*a*a);
}
//Calculate Volume of Rectangale:
int volume(int l,int b,int h){
	return(l*b*h);
}

int main(){
	cout<<"The sum of Two numbers are      : "<<sum(1,2)<<endl;
	cout<<"The sum of Three numbers are    : "<<sum(3,4,5)<<endl;
	cout<<"The volume of Cylinder is       : "<<volume(10,11)<<endl;
	cout<<"The volume of Cube is           : "<<volume(5)<<endl;
	cout<<"The volume of Rectangular is    : "<<volume(7,8,9)<<endl;
	
	
	return 0;
}
