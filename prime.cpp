#include<iostream>
using namespace std;
int main()
{
   int n,i;
   cin>>n;
   for (i = 2; i < n; i++)//for fast use i<n as i*i<n// 
   {
    if((n%i)==0)
    {
       cout<<"not prime"<<endl;
       break;
    }
   }
   if (i==n)//i*i>n place of i==n//
   {
      cout<<"prime"<<endl;
   }
   return 0;
   }
