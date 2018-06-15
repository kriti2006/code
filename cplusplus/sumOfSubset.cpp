#include<iostream>
#include<algorithm>
using namespace std;
int a[3];
bool sumOfSubset(int set[],int n,int sum1,int k) {
  int i=n-1;
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
   return false;
}

int main() {
 int set[] = {3, 34, 4, 12, 5, 2}, sum = 9,k=0;
 int n = sizeof(set)/sizeof(set[0]);
 sort(set,set+n);
 if(sumOfSubset(set,n,sum,k)==true)
  cout<<"found"<<endl;
 else cout<<"no";
 return 0;
}
 
