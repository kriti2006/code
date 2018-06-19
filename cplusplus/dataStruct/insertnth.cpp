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
  Node *ptr=first;
  while(count!=pos-1) {
   count++;
   ptr=ptr->next;
  }
  node->next=ptr->next;
  ptr->next=node;
 }
 print(first);
}   
  
   
/*#include<list>
using namespace std;
struct Node {
 int data;
 Node *next;
};
int main() {
 list <int> ilist={1,2,4,5,6};
 list <int>::iterator it=ilist.begin();
 cout<<"enter position & data";
 int pos,num;
 cin>>pos>>num;
 Node *node=new Node;
 node->data=num;
 node->next=NULL; 
  if(head==NULL)
   return;
  advance(it,pos-2);
*/ 
  
  
