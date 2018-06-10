package library;

public class LinkedList {

	private Node head, tail;
	
	public LinkedList(Node node) throws Exception {
		if (node == null)
			throw new Exception("Can't be null");
		this.head = node;
		this.tail = node;
	}

	public void addNodeToEnd(Node node) {
		tail.next = node;
		tail = node;
		tail.next = null;
	}

	public void print() {
	    Node node = head;
	    while (node != null) {
	        System.out.print(node.info + "->");
	        node = node.next;
        }
    }
}
