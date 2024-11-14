#include<iostream>
using namespace std;
//There are two types of header files 
//1.System header files which comes with compiler
//2.Userdefined header files it is written by the programmer
//#include"this.h"//---> This will produce an error when this file is not present in the current directory 

//cpp referance for header files ..This is a website which gives us header files all types of header files ok and remember that
//some of header files are deprecated(change) withe other new header files ok
int main(){
	int a=4,b=5;
	cout<<"The value of a is : "<<a<<endl;
	cout<<"The value of b is : "<<b<<endl;
	
	cout<<endl;
	cout<<"Following are the operators in c++"<<endl;
	cout<<"The sum of a and b is            : "<<a+b<<endl;
	cout<<"The subtraction of a and b is    : "<<a-b<<endl;
	cout<<"The multiplication of a and b is : "<<a*b<<endl;
    cout<<"The division of a and b is       : "<<a/b<<endl;
    cout<<"The modulus of a and b is        : "<<a%b<<endl;
    cout<<"Increase in a++                  : "<<a++<<endl;//ismay phlay a print hoga iskay bad ismay increment hoga 
    cout<<"Decrease in a--                  : "<<a--<<endl;//ismay phlay a print hoga phir ismay decrement hoga
    cout<<"Increase in ++a                  : "<<++a<<endl;//phlay increment then print a
    cout<<"Decrease in --a                  : "<<--a<<endl;//phlay decrement then print a
    cout<<endl;
//    Asignment operators :
//    int a=3;
//    int b=4;
//    char ch='a';

//      Comperision Oprators :
        cout<<"Followings are the comperision operator "<<endl;
        cout<<"The value of a==b is :"<<(a==b)<<endl;
        cout<<"The value of a!=b is :"<<(a!=b)<<endl;
        cout<<"The value of a<b is  :"<<(a<b)<<endl;
        cout<<"The value of a>b is  :"<<(a>b)<<endl;
        cout<<"The value of a<=b is :"<<(a<=b)<<endl;
        cout<<"The value of a>=b is :"<<(a>=b)<<endl;
        
//       Logical Operators :
        cout<<"Following are the Logical Operator "<<endl;
        cout<<"The And operator between ((a==b)&&(a<b)) is :"<<((a==b)&&(a<b))<<endl;
        cout<<"The OR operator between ((a==b)||(a<b)) is  :"<<((a==b)||(a<b))<<endl;
        cout<<"The Not operator (!(a==b)) is               :"<<(!(a==b))<<endl;
	
	return 0;
}
