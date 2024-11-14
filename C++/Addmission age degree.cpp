#include<iostream>
using namespace std;

int main(){
	int age,degree;
	cout<<"Enter the age:";
	cin>>age;
	cout<<"Enter the degree:";
	cin>>degree;
	
	if(age<18)
		cout<<"You are under age"<<endl;
		
	if(age>24)
		cout<<"Above age"<<endl;
		
    if(degree<12)
        cout<<"Your colification is low";
        
    else{
    	cout<<"Congratulation";
	}
}
