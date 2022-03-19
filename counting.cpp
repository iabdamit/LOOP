#include<iostream>
using namespace std;
void printcounting(int n){// function doesnot print anything
//fuction body
for (int i = 1; i <=n; i++)
{
   cout<<i<<" ";
}
cout<<endl;

}
int main(){
int n;
cin>>n;
//function call
printcounting(n);
return 0;
}