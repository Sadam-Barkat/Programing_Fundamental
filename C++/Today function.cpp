#include<iostream>
using namespace std;

void fun(int x, int *y, int z){
	cout<<x<<endl<<endl<<y<<endl<<endl<<z<<endl<<endl;
	x+=10;
	y+=20;
	cout<<x<<endl<<endl<<y<<endl<<endl<<z;
}
int main(){
	int a=10,b=20,c=30;
	fun(a,&b,c);
}
