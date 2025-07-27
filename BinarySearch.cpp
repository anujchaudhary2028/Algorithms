#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Binary search;

int  Binary(int arr[],int sizee,int key)
{
  int start=0, end=sizee;
  while(start<=end)
  {
    int mid=(start+end)/2;
    if(arr[mid]==key)
    {
      return mid;
    }
    if(arr[mid]<key)
    {
      start=mid+1;
      
    }
    else if (arr[mid]>key)
    {
      end=mid-1;
    }
  }
  return -1;
}

int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10};  // For Binary search elements should be in sorted order
  int sizee=sizeof(arr)/sizeof(arr[0]);
  int key;
  cout<<"Enter value to search :"<<endl;
  cin>>key;
  cout<<"Element index : "<<Binary(arr,sizee,key);
  
  return 0;
}


/* Info related to this programm 

1. Binary search can apply on sorted array
2. k= n/2^k and it will become 1 at the end so n=2^k => logn =k (Time complexity)
 
 */ 


