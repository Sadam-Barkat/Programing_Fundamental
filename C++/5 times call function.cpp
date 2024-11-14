#include<iostream>
using namespace std;

void print(int x,int y,int z){
	cout<<x<<endl<<y<<endl<<z<<endl;
}
void input(int&x,int&y,int&z){
	cout<<"Enter the values"<<endl;
	cin>>x>>y>>z;
	cout<<"The values after taking from user"<<endl;
}
void sum(int x,int y,int z){
	int sum=x+y+z;
	cout<<"The sum of values"<<endl<<sum<<endl;
}
void swap(int &x,int &y,int z){
	int temp=x;
	x=y;
	y=temp;
	cout<<"The values after swaping"<<endl;
}

int main(){
	int a,b,c;
	print(a,b,c);
	input(a,b,c);
	print(a,b,c);
	sum(a,b,c);
	swap(a,b,c);
	print(a,b,c);

	
}
