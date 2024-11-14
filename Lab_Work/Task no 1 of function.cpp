#include<iostream>
using namespace std;

void print(int x,int y){
     cout<<x<<endl<<y<<endl;
}

void input(int&x,int&y){
	cout<<"Enter the value"<<endl;
	cin>>x>>y;
	cout<<"The valuse after taking user"<<endl;
}
void swap(int&x,int&y){
    int	temp=x;
	x=y;
	y=temp;
	cout<<"The values after swaping"<<endl<<x<<endl<<y<<endl;
}
int main(){
	int a,b;
	input(a,b);
	print(a,b);
	swap(a,b);
}
