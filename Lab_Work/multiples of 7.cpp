#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    for(c=a ; c<=b; c++)
    if (c%7==0)
    {
        cout<<c<<endl;
    }
    

    return 0;
}