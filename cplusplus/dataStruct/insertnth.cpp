#include"node.h"
#include<iostream>
using namespace std;
int main() { 
 int pos,num;
// Node *head=NULL;
 Node *first = insert();
 print(first);
 cout<<"enter pos and num";
 cin>>pos>>num;
 int count=1;
 Node *node=new Node;
 node->data=num;
 node->next=NULL;
 if(first==NULL) 
  first=node;
 else {
  if(pos==1) {            //insertFirst
   node->next=first;
   first=node;
  } 
  else {
     Node *ptr=first;
     while(count!=pos-1) {
      count++;
      ptr=ptr->next;
     }
     if(ptr->next==NULL) {     //insertLast
      ptr->next=node;
     }
     else {
        node->next=ptr;
        ptr->next=node;
     }
  }
 }
 print(first);
}   
  
   
  
  
