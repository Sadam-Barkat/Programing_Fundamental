#include<iostream>
using namespace std;

int main(){
	int number;
	cout<<"Enter the number:";
	cin>>number;
	
	if(number>0){
		cout<<"Given number is positive";
	}
	else if(number<0){
		cout<<"Given number is negative";
	}
	else{
		cout<<"Given number is zero";
	}
	return 0;
}
