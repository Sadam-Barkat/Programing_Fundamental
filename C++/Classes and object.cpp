#include<iostream>
using namespace std;

class KG{
	private : int p;
	private : int q;
	
	public : void step(int input){
		p=input;
	    q=p/2;
	    cout<<q;
	}
};

int main(){
	KG obj;
	obj.step(6);
	return 0;
}
