//node.h
#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
struct Node {
 int data;
 Node *next;
};
Node *head = NULL;
Node* insert() {
 int arr[] = {35,30,28,24,13};
 int i;
 int n=sizeof(arr)/sizeof(arr[0]);
 for(i=0;i<5;i++) {
  Node *node=new Node;
  node->data=arr[i];
  if(head==NULL) {
   node->next=NULL;
   head=node;
  }
  else { 
   node->next=head;
   head=node;
  }
 }
 return head;
}
void print(Node *ptr) {
 cout<<"head="<<ptr->data<<endl;
 while(ptr!=NULL) {
  cout<<ptr->data<<"->";
  ptr=ptr->next;
 }
 cout<<endl;
}
#endif
