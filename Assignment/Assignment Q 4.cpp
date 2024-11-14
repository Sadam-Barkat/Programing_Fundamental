#include<iostream>
using namespace std;

int main(){
	int i;
	int j;
	int k;
	int space=5;
	int staric=1;
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=space; j++){
			cout<<" ";
		}
		for(k=1; k<=staric; k++){
			cout<<"*";
		}
			space--;
			staric=staric+2;
	cout<<endl;
	}

}
