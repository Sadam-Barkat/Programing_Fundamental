#include<iostream>
using namespace std;

struct employee
{
	int age;
	float salary;
};

int main(){
	
	struct employee sadam;
	sadam.age=22;
	sadam.salary=150000;
	cout<<sadam.age<<endl;
	cout<<sadam.salary<<endl;
	
	
	return 0;
}
//Structurs are user defined data types and use to combine different type of items.Because for same type of items we use arryas(all are int or all are float etc)
//union are use for memory menagement means to say when we use onject then only specific variable is decleared
//In C++, an enum (short for "enumeration") is a user-defined data type that consists of a set of named integral constants that are known as enumerators. The enum keyword is used to declare an enumeration

#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}

