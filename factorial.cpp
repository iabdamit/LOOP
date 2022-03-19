#include<iostream>
using namespace std;
int main()
{
   int n,fact;
   cin>>n;
   fact=1;
   for (int i = 1; i <=n; i++)
   {
       fact=fact*i;
   }
   cout<<n<<"! ="<<fact<<endl;
    return 0;
}
