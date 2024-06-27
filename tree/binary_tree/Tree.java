import java.util.Stack;

public class Tree {
    private final Node root;

    public Tree(int rootValue) {
        this.root = new Node(rootValue);
    }

    public void add(int value) {
        this.root.addNode(this.root, value);

    }

    public Node getRoot() {
        return root;
    }

    @Override
    public String toString() {
        return "Tree: ** \n" +
                root.toString() +
                "\n}";
    }

    public Node find(int value) {
        Node current = this.root;
        while (current != null) {
            if (current.getValue() == value) {
                return current;
            }
            if (current.getValue() > value) {
                if (current.getLeftNode() == null) {
                    return null;
                }
                current = current.getLeftNode();

            } else {
                if (current.getRightNode() == null) {
                    return null;
                }
                current = current.getRightNode();
            }
        }
        return current;
    }

    public void traverse(Node node) {
        if (node == null) {
            return;
        }

        traverse(node.getLeftNode());
        System.out.println(node.getValue());

        traverse(node.getRightNode());
    }

    public void inorderWithStack() {
        Stack<Node> stk = new Stack<Node>();
        Node curr = this.root;

        // stk.push(curr);
        while (curr != null || stk.size() > 0) {
            while (curr != null) {
                stk.push(curr);
                curr = curr.getLeftNode();
            }
            curr = stk.pop();
            System.out.println(curr.getValue());
            curr = curr.getRightNode();
        }
    }

    public void preorderWithStack() {
        Stack<Node> stk = new Stack<Node>();
        Node curr = this.root;
        stk.push(curr);

        while (stk.size() > 0) {
            curr = stk.pop();
            System.out.println(curr.getValue());

            if (curr.getRightNode() != null) {
                stk.push(curr.getRightNode());
            }
            if (curr.getLeftNode() != null) {
                stk.push(curr.getLeftNode());
            }
        }
    }

    public void postorderWithStack() {
        Stack<Node> stk = new Stack<Node>();
        Node curr = this.root;
        stk.push(curr);

        while (stk.size() > 0) {
            curr = stk.pop();
            System.out.println(curr.getValue());

            if (curr.getLeftNode() != null) {
                stk.push(curr.getLeftNode());
            }
            if (curr.getRightNode() != null) {
                stk.push(curr.getRightNode());
            }

        }
    }
}
