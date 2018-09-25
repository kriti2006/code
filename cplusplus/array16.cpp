//binarysearch
#include<iostream>
using namespace std;
int main() {
 int a[]={1,1,2,2,2,4,4,6,6,9},search=2;
 int n=sizeof(a)/sizeof(a[0]);
 int low=0;
 int high=n-1;
 while(low<high) {
  int mid=(low+high)/2;
  if(a[mid]==search) {
    if(a[mid-1]==search)
      high=mid-1;
    else  {
     cout<<"at"<<mid+1;
     break;
   }
  }
  else if(a[mid]<search)
    low=mid+1;
  else
    high=mid-1;
 }
}
     
