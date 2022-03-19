#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the no."<<endl;
    cin>>a;
    int b;
    cout<<"enter the power"<<endl;
    cin>>b;
    int ans=1;
    for (int i = 1; i <=b; i++)
    {
        ans=ans*a;
    }
    cout<<ans<<endl;
    return 0;
}