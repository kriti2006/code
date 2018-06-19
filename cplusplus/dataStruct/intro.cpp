#include<iostream>
using namespace std;
struct Node {
 int data;
 Node *next;
};
int main() {
 int newdata,num;
 char ch;
 //void atfirst() {
  Node *head = NULL;
  do{
   cout<<"enter data";
   cin>>newdata;
   Node * node=new Node;
   node->data=newdata;
   node->next=head;
   head=node;
   cout<<"enter more?";
   cin>>ch;
  }while(ch=='y');
// void atmid() {
  cout<<"insert after?";
  cin>>num;
  Node *ptr=head;
  Node *prev=NULL;
  while(ptr->data!=num) {
   ptr=ptr->next;
  }
  ptr->next=node
  
   
  
//void print() {
 Node *node=head;
 while(node!=NULL) {
  cout<<"->"<<node->data;
  node=node->next;
 }
//}
}
 
 
 
