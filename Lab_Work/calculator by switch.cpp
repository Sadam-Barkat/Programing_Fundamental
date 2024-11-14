#include<iostream>
using namespace std;

int main(){
	int a,b,x;
	char c;
	
	cout<<"enter first no:";
	cin>>a;
	cout<<"enter second no:";
	cin>>b;
	cout<<"enter operator:";
	cin>>c;
	switch(c){
		
	case '+':
		x=a+b;
		cout<<"Addition:"<<x;
		break;
		case '-':
			x=a-b;
			cout<<"subtraction:"<<x;
			break;
			case '*':
				x=a*b;
				cout<<"Multipliction:"<<x;
				break;
			
					case '%':
						x=a%b;
						cout<<"Modulus:"<<x;
						break;
							case '/':
					x=a/b;
					cout<<"Division:"<<x;
					break;
				
		}
	
	}
