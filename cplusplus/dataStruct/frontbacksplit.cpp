#include"node.h"
#include<iostream>
using namespace std;

void frontbacksplit(Node *head) {
   Node *slow=head;
   Node *fast=head;
   Node *second=NULL;
   while(fast->next!=NULL) {
      slow=slow->next;
      fast=fast->next;
      fast=fast->next;
   }
   second=slow->next;
   slow->next=NULL;
   print(head);
   print(second);
}

int main() {
   Node *head = insert();
   print(head);
   frontbacksplit(head);
   return 0;
}
