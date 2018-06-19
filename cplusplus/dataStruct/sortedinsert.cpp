#include<iostream>
//#include<list>
using namespace std;
struct Node {
 int data;
 Node *next;
};
Node *head=NULL;
Node *ptr=NULL;
Node *current=NULL;
Node *prev=NULL;

void print(Node *ptr1) {
  cout<<"head="<<ptr1->data<<endl;
  while(ptr1!=NULL) {
   cout<<ptr1->data<<"->";
   ptr1=ptr1->next;
  }
  cout<<endl;
}

void sortedinsert(Node *ptr1,Node *node) {
 Node *head = ptr1;
 while(ptr1->data < node->data) {
  if(prev==NULL) 
   prev=head;
  else 
   prev=prev->next;
  ptr1=ptr1->next;
 }
 node->next=ptr1;
 prev->next=node;
 print(head);
}

int main() {
 int a[] = {25,15,20,30,35},i;
 int n=sizeof(a)/sizeof(a[0]);
 for(i=0;i<n;i++) {
  Node *node=new Node;
  node->data=a[i];
  if(head==NULL) {
   node->next=NULL;
   head=node;
  }
  else { 
   node->next=head;
   head=node;
  }
 }
 print(head);

 current=head;
 ptr=head->next;
 int temp;
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
 print(head);
 cout<<"data";
 int nmbr;
 cin>>nmbr;
 Node *node=new Node;
 node->data=nmbr;
 node->next=NULL;
 sortedinsert(head,node);
}


 
  
  
     
    
   
   
 

