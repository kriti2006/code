import library.LinkedList;
import library.Node;

public class LinkedListUser {

    public static void main(String[] args) {
        Node node = new Node(20, null);
        try {
            LinkedList linkedList = new LinkedList(node);
            for (int i = 21; i < 30; i++) {
                linkedList.addNodeToEnd(new Node(i, null));
            }
            linkedList.print();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

}
