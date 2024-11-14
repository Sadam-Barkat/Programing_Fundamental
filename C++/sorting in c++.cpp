#include<iostream>
using namespace std;
int main()
{
	int A[4];
	for(int i=0;i<=3;i++)
	{
	  cout<<"Enter the elements in array : ";
	  cin>>A[i];
   }
   int passno;
   for(passno=0;passno<3;passno++)
   {
   	for(int i=0;i<3;i++)
   	{
   		if(A[i]>A[i+1]) 
		   {
		   	int temp;
		   	temp=A[i];
		   	A[i]=A[i+1];
		   	A[i+1]=temp;
			} 
	}
   }
   cout<<"Your list after sorting is "<<endl;
   for(int i=0;i<=3;i++)
   {
   	cout<<A[i]<<endl;
   }
   return 0;
}

