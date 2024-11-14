//write c++ program that reads three numbers and print the value of largestr
#include<iostream>
using namespace std;

int main(){
	double a,b,c,d;
	char z;
	cout<<"enter first no:"<<endl;
	cin>>a,z;
	cout<<"enter second no:"<<endl;
	cin>>b,z;
	cout<<"enter third no:"<<endl;
	cin>>c,z;
	cout<<"enter fouth no:"<<endl;
	cin>>d,z;
	

	if(a==b)
	
		cout<<"first and second no,s are equal"<<endl;
	
	
	 if(a==c)
		cout<<"first and third no,s are equal"<<endl;
	
	 if(a==d)
		cout<<"first and fourth no,s are equal"<<endl;
	
	 if(b==c)
		cout<<"second and third no,s are equal"<<endl;
	
	 if(b==d)
		cout<<"second and fourth no,s are equal"<<endl;
	
	 if(c==d)
		cout<<"third and fourth no,s are equal"<<endl;
			
	
	else {
		cout<<"there are no equalance";
	}
	
	}
