#include<iostream>
#include<algorithm>
using namespace std;
int a[5],k=0;
bool sumOfSubset(int set[],int n,int sum) {
   if(n==0)
    return false;
   int i=n-1;
   
   if(set[i]==sum){
    a[k++]=set[i];
    return true;
   }
   
   else if(set[i]>sum)
    return sumOfSubset(set,i,sum);
    
   else {
     int sum1=sum-set[i];
     int pos = i;
     if(sumOfSubset(set,i,sum1)==true) 
        a[k++]=set[pos];
     else 
       return sumOfSubset(set,i,sum); 
   }  
}


int main() {
 int set[] = {3,34, 4, 12, 5,2}, sum = 9;
 int n = sizeof(set)/sizeof(set[0]);
 sort(set,set+n);
 if(sumOfSubset(set,n,sum)==true) {
  cout<<"found"<<endl;
  for(int i=0;i<k;i++)
   cout<<a[i]<<" ";
 }
 else cout<<"no";
 return 0;
}
 /*  int i=n-1;
 // cout<<"called"<<endl;
  while(i>=0) {
   if(set[i]>sum1)
     i--;
   else {
    sum1-=set[i];
    a[k++] = set[i];
    i--;
  //  cout<<sum1;
    if(sum1==0) {
     for(int j=0;j<k;j++) {
       cout<<a[j]<<endl;
     }
  //   cout<<"print"<<endl;
     return true;
    }
    else sumOfSubset(set,i+1,sum1,k);
   }
  }
  if(i<0)
   return false; */

 
