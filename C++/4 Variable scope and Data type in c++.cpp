#include<iostream>
using namespace std;

int glo = 6;
void sum(){
	cout<<glo<<endl;
}

int main(){
//	int a = 1;
//	int b = 2;
//  int a = 1,b = 2;
//  float pi = 3.14;
//  char ch = 'a';
    bool t = true;
    bool f = false;
    int glo = 9; /*This shows that the local variable takes precedence over global variable.so this is the answer that we discuse 
                  in starat of lecture the question was that "can we take same variables of global and local"so the answer is yes
				  but the periority will be given to the local variablef */
    glo = 78; //Now our local variable becomes update
//	cout<<"The value of a is = "<<a<<endl<<"The value of b is = "<<b<<endl;
//	cout<<"The value of pi is = "<<pi<<endl;
//	cout<<"The charactor is = "<<ch<<endl;
    sum();
	cout<<glo<<endl;
	cout<<t<<endl;
	cout<<f<<endl;
	
	return 0;
}
