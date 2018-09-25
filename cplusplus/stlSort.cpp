#include<iostream>
#include<algorithm>
using namespace std;

void show(int a[]) {
 for(int i=0;i<10;i++) 
  cout<<a[i]<<"\t";
 }

int main() {
 int a[]={5,2,3,6,10,1,9,8,7,4};
 show(a);
 sort(a,a+10,greater()); //STL sort()
 cout<<"sorted=";
 show(a);
 return 0;
}

