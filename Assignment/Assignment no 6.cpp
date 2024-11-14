#include<iostream>
using namespace std;

int main(){
	 int A[3][3];
	 int B[3][3];
	 
	 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 		cout<<"Enter value of 2D Array for Matric A:";
	 		cin>>A[i][j];
		 }
   }
		  
	 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
		 
	 	   cout<<A[i][j]<<"\t";
	 }
	 cout<<endl<<endl;
}

 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 		cout<<"Enter value of 2D Array for Matric B:";
	 		cin>>B[i][j];
		 }
   }
		  
	 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
		 
	 	   cout<<B[i][j]<<"\t";
	 }
	 cout<<endl<<endl;
}
  int C[3][3];
   cout<<"Addition of A and B"<<endl;
   for(int i=0; i<3; i++){
   	for(int j=0; j<3; j++){
	   
   	   C[i][j]=A[i][j]+B[i][j];
   	   cout<<C[i][j]<<"\t";
   	   }
   	   cout<<endl<<endl;
   }
  
  int D[3][3];
   cout<<"Subtraction of A and B"<<endl;
   for(int i=0; i<3; i++){
   	for(int j=0; j<3; j++){
	   
   	   D[i][j]=A[i][j]-B[i][j];
   	   cout<<D[i][j]<<"\t";
   	   }
   	   cout<<endl<<endl;
   }
   
    int E[3][3];
   cout<<"Multiplication of A and B"<<endl;
   for(int i=0; i<3; i++){
   	for(int j=0; j<3; j++){
	   
   	   E[i][j]=A[i][j]*B[i][j];
   	   cout<<E[i][j]<<"\t";
   	   }
   	   cout<<endl;
   }
    int F[3][3];
   cout<<"Transpose of Matric A"<<endl;
   for(int i=0; i<3; i++){
   	for(int j=0; j<3; j++){
	   
   	   F[i][j]=A[j][i];
   	   cout<<F[i][j]<<"\t";
   	   }
   	   cout<<endl;
   }
}
