#include<iostream>
using namespace std;

void input(int arr[],int size){
	cout<<"Enter the values"<<endl;
	for(int i=0; i<10; i++){
		cin>>arr[i];
	}
	cout<<"The values after taking user"<<endl;
}
void print(int arr[],int){
	for(int i=0; i<10; i++){
		cout<<arr[i]<<endl;
	}

}
void max(int arr[],int size ){
	   cout<<"The maximum value"<<endl;
	    int m=arr[0];
	    for(int i=1; i<size; i++){
	    	if(arr[i]>m){
	    		m=arr[i];
		}
		cout<<"maximum"<<m<<endl;
		
}	

}
int main(){
	int arr[10];
	input(arr,10);
	print(arr,10);	
	max(arr,10);
	print(arr,10);
}
