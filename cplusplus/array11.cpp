#include<iostream>
using namespace std;
int main() {
 int arr={9,10,11,1,3,6,7},sum=13,i;
 for(i=0;i<n;i++) {
  if(arr[i]>arr[i+1])
   break;
 }
 int start = (i+1)%n,end =i;
 while(start!=end) {
  t=a[start]+a[end];
  if(t==sum) {
   cout<<"found";
   cout<<a[start]<<" "<<a[end]<<endl;
   start=(start+1)%n;
  }
  else if(t<sum) 
   start=(start+1)%n;
  else {
   end--;
   if(end<0)
    end=n-1;
  }
 }  
}
