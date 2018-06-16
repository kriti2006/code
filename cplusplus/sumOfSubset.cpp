#include<iostream>
#include<algorithm>
using namespace std;
int a[5],k=0;
bool sumOfSubset(int set[],int n,int sum) {
   if(n==0)
    return false;
   if(n==1) {
     if(set[n-1]==sum) {
      a[k++]=set[n-1];
      return true;
     }
     else return false;
   }
   else {
    if(set[n-1]>sum)
      return sumOfSubset(set,n-1,sum);
    else {
     int sum1=sum-set[n-1];
      const int pos=n-1;
      if(sumOfSubset(set,n-1,sum1)==true) 
        a[k++]=set[pos];
      else {
       n = pos;
       return sumOfSubset(set,n-1,sum); 
      }
    }
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

 
