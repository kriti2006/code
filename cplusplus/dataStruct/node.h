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
 int arr[] = {14,25,12,24,30,35,38,40,45};
 int i;
 int n=sizeof(arr)/sizeof(arr[0]);
 for(i=0;i<n;i++) {
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
