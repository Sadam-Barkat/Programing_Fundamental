#include<iostream>
using namespace std;

void input(int[],int size){
		cout<<"Enter the value"<<endl;
	for(int i=0; i<10; i++){
		cin>>i;
	}
		cout<<"The valuse after taking user"<<endl;
}
void print(int[], int size){
	for(int i=0; i<10; i++){
		cout<<i<<endl;
	}
}
void max(int arr[], int size){
	int m=arr[0];
	for(int i=1; i<size; i++){
		if(arr[0]>m){
			cout<<"The grater number"<<m<<endl;
		}
	}
}

int main(){
	int marks[10];
	input(marks , 10);
	print(marks, 10);
	max(marks,10);
}
