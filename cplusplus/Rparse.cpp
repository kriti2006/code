//reverse the string
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
   string s("now.;sense;make;to;going;is;this");
   cout<<s<<endl;
   vector<string> strings;
   int last=s.size();
   int current=s.rfind(';');
   while(current!=string::npos) {
      strings.push_back(s.substr(++current,last-current));
      current-=2;
      last=current;
      current=s.rfind(';',last);
   }
   strings.push_back(s.substr(0,last-current));
   for(int j=0;j<strings.size();j++)
      cout<<strings[j]<<" ";
}
