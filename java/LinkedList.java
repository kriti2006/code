public class LinkedList {
	private class Node {
    	int x;
		Node next;
	}

	private Node head, tail;
	
	LinkedList(Node node) {
		if (node == null)
			throw new Exception("Can't be null");
		this.head = node;
		this.tail = node;
	}

	void addNodeToEnd() {
			
	}
}
