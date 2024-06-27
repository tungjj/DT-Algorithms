public class CompareUtils {
    public static boolean compareTree(Tree a, Tree b) {
        Node rootA = a.getRoot();
        Node rootB = b.getRoot();

        return isNodeSame(rootA, rootB);
    }

    private static boolean isNodeSame(Node a, Node b) {
        if (a == null && b == null) {
            return true;
        }

        if (a != null && b != null) {
            return (a.getValue() == b.getValue() && isNodeSame(a.getLeftNode(), b.getLeftNode())
                    && isNodeSame(a.getRightNode(), b.getRightNode()));
        }
        return false;
    }
}
