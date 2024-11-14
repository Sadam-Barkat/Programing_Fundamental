#include<iostream>
using namespace std;

int sum(int x, int y){
	int z=x+y;
	return z;
}

int main(){
	int x,y;
	cout<<"Enter the value of x:";
	cin>>x;
	cout<<"Enter the value of y:";
	cin>>y;
	
	cout<<"The sum is:"<<sum( x,  y);
	return 0;
	
}
