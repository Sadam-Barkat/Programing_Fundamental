#include<iostream>
using namespace std;

void sadam(int n);

int main(){
	int arr[5];
	for(int i=0; i<5; i++){
		cout<<"Enter the vlues:";
		cin>>arr[i];
	}
	cout<<"Calling the function"<<endl;
		for(int i=0; i<5; i++){
		sadam(arr[i]);
	}
}
void sadam(int n){
	cout<<n<<"\t"<<n*n<<endl;
}
