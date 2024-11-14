#include<iostream>
using namespace std;

int main(){
	int year;
	cout<<"enter the year:";
	cin>>year;
	
	if(year%4==0&&year%100!=0||year%400==0){
		cout<<"Leape year";
	}
	else{
		cout<<"Not leape year";
	}
}
