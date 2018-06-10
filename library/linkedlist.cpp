#include<iostream>
using namespace std;

struct Node {
   int code;
   Node * next;
};

class LinkedList {
    private:
	Node * head;
	Node * tail;
    
    public:
    LinkedList(Node * head) {
		if (head == null)
			throw "HEAD can't be null";
		this->head = head;
		this->tail = head;
	}

	void addNodeToEnd(Node *node) {
		this->tail->next = node;
		node->next = NULL;
		this->tail = node;	
	}

}
