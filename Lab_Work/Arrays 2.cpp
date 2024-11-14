#include<iostream>
using namespace std;

int main(){
	int marks[4]={2,3,4,5};
	
	int*p=marks;
	cout<<*(p+2)<<endl;
	cout<<*(p+3)<<endl;
	cout<<*(p+4)<<endl;
	
}
