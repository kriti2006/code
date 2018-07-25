#include<iostream>
#include<string>
using namespace std;

int found=0;

string isPossible(int a,int b,int c,int d){
   if(found==1) 
      return "YES";
   
   if(a==c && b==d) {
      found=1;
      return "YES";
   }   
            
   else if(a>c && b>d)
      return "NO";
      
   else {
      if(a+b<=c) 
         isPossible(a+b,b,c,d);
      if(a+b<=d)
         isPossible(a,a+b,c,d);
   }
}

int main() {
   int a,b,c,d;
   cout<<"enter values";
   cin>>a>>b>>c>>d;
   string res = isPossible(a,b,c,d);
   cout<<res; 
}
