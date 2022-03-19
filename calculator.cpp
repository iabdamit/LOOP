#include<iostream>
using namespace std;
int main ()
{
   float a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char operation;
    cout<<"enter the operation"<<endl;
    cin>>operation;
    switch (operation)
    {
    case '+':cout<<(a+b)<<endl;
        break;
    case '-':cout<<(a-b)<<endl;
        break;
    case '*':cout<<(a*b)<<endl;
        break;
    case '/':cout<<(a/b)<<endl;
        break;
     default:cout<<"please enter valid operation"<<endl;
        break;
    }
return 0;
}