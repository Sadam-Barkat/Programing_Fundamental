#include<iostream>
using namespace std;

void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	int x=4,y=5;
	cout<<"The value of x:"<<x<<endl<<"The value of y:"<<y<<endl;
	swap(x,y);
	cout<<"The value of x after swaping:"<<x<<endl<<"The value of y after swaping:"<<y;
}
