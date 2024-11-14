#include<iostream>
using namespace std;

int main(){
	int arr[5];
	cout<<"Enter the value"<<endl;
	for(int i=0; i<5; i++){
		cin>>arr[i];
	}
	for(int j=0; j<5; j++){
		for(int i=0; i<5; i++){
			if(arr[i]>arr[i+1]){
				int temp;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
				cout<<"The values after sorting"<<endl;
		for(int i=0; i<5; i++)
		{
			cout<<arr[i];
		}
		}
	
	}
	return 0;
}
