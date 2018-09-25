#include"node.h"
#include"sortedinsert.h"
#include<iostream>
using namespace std;
void insertsort(Node *current, Node *ptr, Node *node) {
 int temp;
 Node *first = current;
 while(current->next!=NULL) {
  while(ptr!=NULL) {
   if(current->data > ptr->data) {
    temp=current->data;
    current->data=ptr->data;
    ptr->data=temp;
   }
   ptr=ptr->next;
  }
  current=current->next;
  ptr=current->next;
 }
 print(first);
 sortedinsert(first,node);
}
int main() {
 Node *head=insert(); 
 print(head);
 cout<<"data";
 int nmbr;
 cin>>nmbr;
 Node *node=new Node;
 node->data=nmbr;
 node->next=NULL;
 Node *current=head;
 Node *ptr=head->next;
 insertsort(current,ptr,node);
 return 0;
}



 
  
  
     
    
   
   
 

