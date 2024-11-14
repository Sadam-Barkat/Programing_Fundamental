#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"enter the alphabat:";
	cin>>ch;
	
	switch(ch){
		
		case 'A':
		case 'a':
			cout<<"Vowel";
			break;
		case 'E':
		case 'e':
			cout<<"Vowel";
			break;
		case 'I':
		case 'i':
			cout<<"Vowel";
			break;
		case 'O':
		case 'o':
			cout<<"Vowel";
			break;
		case 'U':
		case 'u':
			cout<<"Vowel";
			break;				

	default:
	cout<<"Consonants";
	}
}
