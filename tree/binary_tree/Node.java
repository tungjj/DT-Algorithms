package aden.dev.site;

public class Node {
    private Node leftNode;
    private Node rightNode;
    private int value;

    public Node(int value) {
        this.value = value;
        this.leftNode = null;
        this.rightNode = null;
    }

    public Node getLeftNode() {
        return leftNode;
    }

    public void setLeftNode(Node leftNode) {
        this.leftNode = leftNode;
    }

    public Node getRightNode() {
        return rightNode;
    }

    public void setRightNode(Node rightNode) {
        this.rightNode = rightNode;
    }

    public int getValue() {
        return value;
    }

    public void setValue(int value) {
        this.value = value;
    }

    public Node addNode(Node currentNode, int value) {
        if (currentNode == null) {
            return new Node(value);
        }
        if (value < currentNode.value) {
            currentNode.setLeftNode(addNode(currentNode.getLeftNode(), value));

        } else {
            currentNode.setRightNode(addNode(currentNode.getRightNode(), value));
        }
        return currentNode;
    }

    @Override
    public String toString() {

        String leftNodeStr = leftNode == null ? "null" : leftNode.toString();
        String rightNodeStr = rightNode == null ? "null" : rightNode.toString();
        return "{ " + leftNodeStr + " | value:" + value + " | " + rightNodeStr + " }";
    }
}
