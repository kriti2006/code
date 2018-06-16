#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main() {
 map<int, int> num;
 int a[20];
 cout<<"enter array size"<<endl;
 int n;
 cin>>n;
 cout<<"array"<<endl;
 for(int i=0;i<n;i++) 
  cin>>a[i];
 for(int i=0;i<n;i++) {
  map<int,int>::iterator it;
  it = num.find(a[i]);
  if(it==num.end())  
   num.insert(pair <int, int> (a[i], 1));
  else
   it->second = it->second+1;
 }
 map<int,int>::iterator itr;
 for(itr=num.begin();itr!=num.end();itr++) {
  if(itr->second%2 != 0)
    cout<<itr->first;
 }
}
 
 
  
 
