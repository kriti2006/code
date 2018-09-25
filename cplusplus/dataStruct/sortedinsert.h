#ifndef SORTEDINSERT_H
#define SORTEDINSERT_H
#include"node.h"
using namespace std;
void sortedinsert(Node *ptr1,Node *node) {
 Node *head = ptr1;
 Node *prev=NULL;
 while((ptr1!=NULL) && (ptr1->data < node->data)) {
  if(prev==NULL) 
   prev=head;
  else 
   prev=prev->next;
  ptr1=ptr1->next;
 }
 if(prev==NULL) {
   node->next=ptr1;
   head=node;
 }
 else if(ptr1==NULL) {
   prev->next=node;
   node->next=NULL;
 }
 else {
   node->next=ptr1;
   prev->next=node;   
 }
 print(head);
}
#endif
