#include<iostream>
using namespace std;

void remaindercalculator(int a,int b){
	int y=a%b;
	int z=a/b;
	cout<<"The remainder is:"<<y<<endl<<"The qution is:"<<z;
}

int main(){
	int a,b;
	cout<<"Enter the values:"<<endl;
	cin>>a>>b;
	remaindercalculator(a,b);
	return 0;
}
