#include<iostream>
using namespace std;

void print(int x,int y,int z,int v,int w){
	cout<<x<<endl<<y<<endl<<z<<endl<<v<<endl<<w<<endl;
}
void input(int&x,int&y,int&z,int&v,int&w){
	cout<<"Enter the values"<<endl;
	cin>>x>>y>>z>>v>>w;
	cout<<"The vlues after taking from user"<<endl;
}
void average(int x,int y,int z,int v,int w){
    int sum=x+y+z+v+w;
    int average=sum/5;
    cout<<"Average of valuse"<<endl;
	cout<<average<<endl;
}
int main(){
	int a,b,c,d,e;
	print(a,b,c,d,e);
	input(a,b,c,d,e);
	print(a,b,c,d,e);
	average(a,b,c,d,e);
}
