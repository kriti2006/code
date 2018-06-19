#include<iostream>
using namespace std;
int main() {
 int arr[]={3,4,5,6,7,8,9};
 int k;
 cout<<"enter position";
 cin>>k;
 int n=sizeof(arr)/sizeof(arr[0]);
 while(k>0) {
  int i=0;
  int temp=arr[n-1];
  int j=n-2;
  while(j>=0) {
   arr[j+1]=arr[j];
   j--;
  }
  arr[0]=temp;
  k--;
 }
 for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
}
  
 
