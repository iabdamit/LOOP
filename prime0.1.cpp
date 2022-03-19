#include<iostream>
using namespace std;
int main()
{/*
    int n;
    cin>>n;
    bool isprime =1;
    for (int i = 2; i <n; i++)
    {
       if (n%i==0){
//cout<<"not a prime no."<<endl;//
isprime =0;
break;
       }
    }
    if (isprime==0)
    {
        cout<<"is not a prime no."<<endl;
    }
    else{
        cout<<"is a prime no."<<endl;
    }
    
   for (int i = 0; i <=5; i++)
   {
       cout<<i<<" ";
       i++;
   }
  
  for (int i = 0; i <=5; i--)
  {
      cout<<i<<" ";
      i++;//infinite loop//
  }
  
 for (int i = 0; i <=15; i+=2)
 {
     cout<<i<<" ";
     if (i&1)//if i=1;1&1=1//
     {
        continue;
     }
     
 }

 for (int i = 0; i <5; i++)
 {
     for (int j = i; j<=5; j++)
     {
        cout<<i<<" "<<j<<endl;
     }
     
 }*/
 for (int i = 0; i <5; i++)
 {
    for (int j = i; j <=5; j++)
    {
        if(i+j==10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
    
 }
 
    return 0;
}