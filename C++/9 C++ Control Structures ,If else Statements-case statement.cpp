#include<iostream>
using namespace std;

int main(){
//	Selection control structur:if eles-else if
//    int age;
//	cout<<"Enter the age : ";
//	cin>>age;
//	if(age<18 && age>12){
//		cout<<"You are under age!"<<endl;
//	}
//	else if(age==18 && age<26){
//		cout<<"You can come to my party!"<<endl;
//	}
//	else if(age<11 && age>0){
//		cout<<"You are kid!"<<endl;
//	}
//	else{
//		cout<<"Wrong Commad!"<<endl;
//	}


//	Selection control structur:Switch case statement
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    switch(age){
    	case 1:
        	cout<<"Your are age is 1 Year"<<endl;
    		break;
    	case 2:
    		cout<<"Your are age is 2 Year"<<endl;
    		break;
    	case 3:
    		cout<<"Your are age is 3 Year"<<endl;
    		break;
    	case 4:
    		cout<<"Your are age is 4 Year"<<endl;
    		break;
    	case 5:
    		cout<<"Your are age is 5 Year"<<endl;
    		break;	
		case 6:
    		cout<<"Your are age is 6 Year"<<endl;
    		break;
		case 7:
    		cout<<"Your are age is 7 Year"<<endl;
    		break;
		case 8:
    		cout<<"Your are age is 8 Year"<<endl;
    		break;
		case 9:
    		cout<<"Your are age is 9 Year"<<endl;
    		break;	
		case 10:
    		cout<<"Your are age is 10 Year"<<endl;
    		break;
		case 11:
    		cout<<"Your are age is 11 Year"<<endl;
    		break;
		case 12:
    		cout<<"Your are age is 12 Year"<<endl;
    		break;
		case 13:
    		cout<<"Your are age is 13 Year"<<endl;
    		break;
		case 14:
    		cout<<"Your are age is 14 Year"<<endl;
    		break;
    	case 15:
    		cout<<"Your are age is 15 Year"<<endl;
    		break;
    		default:
    		cout<<"Wrong Command!"<<endl;
	}



	return 0;
	
}
