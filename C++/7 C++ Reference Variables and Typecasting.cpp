#include<iostream>
using namespace std;

int c = 40;

int main(){
//  ********************Build in data types**************************

//	int a,b,c;
//	cout<<"Enter the value of a :";
//	cin>>a;
//	cout<<"Enter the value of b :";
//	cin>>b;
//	c = a+b;
//	cout<<"The sum is : "<<c<<endl;
//	cout<<"The global C is : "<<::c<<endl;//Global variable can be call by :: ascope resoluion ok other it is not call
	
//  ******************Float,Double and Long double Litterals *********

//	float d = 34.4f;//This 'f' show it is a floating point value .it will work in function overloading
//	long double e = 34.4l;//This 'l' show it is a long double and it also helps in functoin overloading
//	cout<<"The float value is :"<<d<<endl<<"The long double value is :"<<e<<endl;
//  34.4f;//This will give us floating value ok otherwise it is by default a double values ok
//  //Note: we can also use small litteral or large litteral e.g f or F and l or L
//  cout<<"The size of 34.4 is  : "<<sizeof(34.4)<<endl;
//  cout<<"The size of 34.4f is : "<<sizeof(34.4f)<<endl;
//  cout<<"The size of 34.4F is : "<<sizeof(34.4F)<<endl;
//  cout<<"The size of 34.4l is : "<<sizeof(34.4l)<<endl;
//  cout<<"The size of 34.4L is : "<<sizeof(34.4L)<<endl;
	
//  ********************Reference Variabels ***************************

//  Rohan Das----> Raho----> DangerousCoder
     
//       float x = 455;
//       cout<<x<<endl;
//        float &y = x;
//       cout<<y<<endl;


//  ********************TypeCasting***********************************

    float a = 45.46;
    int   b = 46;
    cout<<"The value of f is : "<<(int)a<<endl;
    cout<<"The value of f is : "<<int(a)<<endl;
    
    cout<<"The value of x is : "<<(float)b<<endl;
    cout<<"The value of x is : "<<float(b)<<endl;
    
    cout<<"The sum is : "<<a+b<<endl;
    cout<<"The sum is : "<<int(a)+b<<endl;
    cout<<"The sum is : "<<int(a+b)<<endl;
    

	
	
	return 0;
}
