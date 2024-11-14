#include<iostream>
using namespace std;
#include<iomanip>// By including iomanip we can easily use (setw).setw helps to set the field width.setw is a manipulator

int main(){
// 	 int a = 35;
//	 cout<<"The value of a is :"<<a<<endl;
//   a = 45;
//	 cout<<"The value of a is :"<<a<<endl;


//   Constants in C++:
//   const int a = 20;
//   cout<<"The value of a is :"<<a<<endl;//Now this value remain same because I set its value constant ok
//   a = 23; 
//   cout<<a;
      
      
//   Manipulators in c++ :
//   Manipulators are different types endl \n \t are one type and some types are capable when we include <iomanip> libariry 
//  int a=3,b=78,c=1233;
//  cout<<"The value of a without setw is: "<<a<<endl;
//  cout<<"The value of b without setw is: "<<b<<endl;
//  cout<<"The value of c without setw is: "<<c<<endl;
//  cout<<"The value of a is: "<<setw(4)<<a<<endl;//Note:The no 4 show each decleared number accupay the lenght of 4 number 
//  cout<<"The value of b is: "<<setw(4)<<b<<endl;
//  cout<<"The value of c is: "<<setw(4)<<c<<endl;


//   Operator Precedence in C++:
//   int  a=3, b=5, c;
//   c = ((((a*5)+b)-45)+87);
//   cout<<"The value of c is: "<<c<<endl;
//   for this goto the the website en.cppreference.com 
//   precedence depends on the list if * is upper line on the website then its preority first
//   and after that if two expresions are on the same line then we seen the associavity 
//   in first line = a*b   a/b   a%b 
//   in second line = a+b  a-b       after that we seen the associativity and in this case it is (left to right)
   
	return 0;
}

//Note: What is the purpose of constants ?
//Ans: some time we set the value like pi(3.14) and we want to that this value remain constant or does not change so that case
//we set its value constant if someone by mistakenly change its value the compiler prompet error
