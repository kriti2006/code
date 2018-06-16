#include<iostream>
using namespace std;
int main()  {
 int a[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
/* for(int i=0;i<4;i++) {
  for(int j=0;j<5;j++)
    cout<<a[i][j]<<" ";
  cout<<endl;
 } */
 rows=4,col=5;
 while()
 int i=0,j,k;
 for(j=0;j<5;j++)
  cout<<a[i][j]<<" ";
 i++;
 j--;
 for(k=i;k<4;k++)
  cout<<a[k][j]<<" ";
 i=k-1;
 j--;
 for(k=j;k>=0;k--)
  cout<<a[i][k]<<" ";
 return 0;
}
