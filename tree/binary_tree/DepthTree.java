public class DepthTree {
    public static int getDepth(Node node) {
        if (node == null) {
            return 0;
        }
        int left = getDepth(node.getLeftNode());
        int right = getDepth(node.getRightNode());

        return Math.max(left, right) +1;
    }
}