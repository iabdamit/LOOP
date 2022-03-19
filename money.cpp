#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"enter the amount"<<endl;
    cin>>amount;
    int $100 , $50, $20, $1;
    int rem ;
switch (1)
{
case 1 :rem =amount/100;
    amount=amount%100;
   cout<<"no. of $100 note ="<<" "<<rem<<endl;
   case 2 :rem =amount/50;
   amount=amount%50;
   cout<<"no. of $50 note ="<<" "<<rem<<endl;
case 3 :rem =amount/20;
    amount=amount%20;
   cout<<"no. of $20 note ="<<" "<<rem<<endl;
   case 4 :rem =amount/10;
   amount=amount%10;
   cout<<"no. of $10 note ="<<" "<<rem<<endl;
   case 5 :rem =amount/1;
   cout<<"no. of $1 note = "<<" "<<rem<<endl;
   break;
default:cout<<" invalid amount"<<endl;
    break;
}
    
    return 0;

}