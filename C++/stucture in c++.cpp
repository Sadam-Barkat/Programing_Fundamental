#include<iostream>
using namespace std;

struct Student
{
	int rollno;
	float cgpa;
	char grade;
};

int main(){
	Student s;
	s.rollno=221698;
	s.cgpa=3.67;
	s.grade='A';
	
	cout<<"Roll NO:"<<s.rollno<<endl<<"CGPA:"<<s.cgpa<<endl<<"Grade:"<<s.grade;
}
