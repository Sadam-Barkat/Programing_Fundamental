#include<iostream>
using namespace std;

void average(int a ,int b ,int c,int d){
	int y=a+b+c+d;
	int z=y/4;
	cout<<"The average of the marks is:"<<z;
}
int main(){
	int a,b,c,d;
	cout<<"Enter the marks:"<<endl;
	cin>>a>>b>>c>>d;
	average(a,b,c,d);
	return 0;
}
