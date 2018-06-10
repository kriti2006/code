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
		if (head == NULL)
			throw "HEAD can't be null";
		this->head = new Node();
		this->head->code = head->code;
		this->head->next = NULL;
		this->tail = this->head;
	}

	/*void addNodeToEnd(Node *node) {
	//	cout<<"B"<<tail->code<<"\n";
		this->tail->next = new Node();
		this->tail = this->tail->next;;
		this->tail->code = node->code;
		this->tail->next = NULL;	
		//cout<<"E"<<tail->code<<"\n";
	}*/

	void addNodeToEnd(Node * node) {
		this->tail->next = node;
		this->tail = node;
		this->tail->next = NULL;
	}

	void print() {
		Node * node = head;
		while(node != NULL) {
			cout<<node->code<<"->";	
			node = node->next;	
		}
		cout<<"\n";
	}

	void deleteAll() {
		Node * node = head;
		while(node != NULL) {
			Node *temp = node;
			node = node->next;
			delete temp;	
		}
	}

};

int main() {
	Node node;
    node.code = 20;
    node.next = NULL;

    LinkedList ll(&node);
	for (int i = 21; i < 30; i++) {
		Node * n = new Node; n->code = i;
		ll.addNodeToEnd(n);
		ll.print();	
	}
	ll.print();
	ll.deleteAll();
}
