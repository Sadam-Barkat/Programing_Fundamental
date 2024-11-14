#include<iostream>
using namespace std;

void print(int arr[] ,int size){
	   for(int j=0; j<size; j++){
	   cout<<arr[j];
	   }
}
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter the number: ";
		cin>>arr[i];
	}
	print(arr,10);
	cout<<endl;
	print(arr,5);
	return 0;
}
