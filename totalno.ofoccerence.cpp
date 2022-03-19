#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
     int ans=-1;
    while (start<=end)
    {
       if (arr[mid]==key)
       {
           ans=mid;
            end=mid-1;
       }
       else if(key<arr[mid])
       {
         end=mid-1;
       }
       else if ( key>arr[mid])
       {
         start=mid+1;
       }
       
       mid = start+(end-start)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
     int ans=-1;
    while (start<=end)
    {
       if (arr[mid]==key)
       {
           ans=mid;
            start=mid+1;
       }
       else if(key<arr[mid])
       {
         end=mid-1;
       }
       else if ( key>arr[mid])
       {
         start=mid+1;
       }
       
     mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
int even[7]={1,2,3,3,3,3,5};
cout<<"total no. of occurence of the key is "<<lastocc(even,7,3)-firstocc(even,7,3)+1;
    return 0;
}
