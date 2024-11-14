#include<iostream>
using namespace std;

int main(){
	   int arr[10]={10,20,30,40,50,60,70,80,90,100};
	   
	   for(int i=0; i<10; i++){
	   	  cout<<arr[i]<<endl;
	   }
	   cout<<"Revese order"<<endl;
	   for(int j=9; j>=0; j--){
	   	  cout<<arr[j]<<endl;
	   }
	   int brr[10];
	   cout<<"Store arr into brr"<<endl;
	   for(int k=0; k<10; k++){
	  	  brr[k]=arr[9-k];
	  	  cout<<brr[k]<<endl;
	   }
	   cout<<"Arr and Brr"<<endl;
	   for(int l=0; l<10; l++){
	   	  cout<<arr[l]<<"  "<<brr[l]<<endl;
	   }
	   int crr[10];
	   cout<<"Store arr and brr into crr"<<endl;
	   for(int m=0; m<10; m++){
	   	  crr[m]=arr[m]+brr[m];
	   	  cout<<crr[m]<<endl;
	   }
	   
	
}
