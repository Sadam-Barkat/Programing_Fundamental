#include<iostream>
using namespace std;

int sum(int a,int b)
{
	int sum=(a+b);
}
int main(){
	int a,b;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<sum(a,b)<<endl;
	cout<<&a<<endl<<&b;
	return 0;
}

