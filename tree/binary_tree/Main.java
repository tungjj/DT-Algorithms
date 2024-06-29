
public class Main {
    // 3
    // 1 | 5
    // 0 | 2 | 4 | 6
    public static void main(String[] args) {
        Tree tree = new Tree(3);

        tree.add(1);
        tree.add(5);
        tree.add(0);
        tree.add(2);
        tree.add(4);
        tree.add(6);
        tree.add(7);
        tree.add(9);
        tree.add(20);

        Tree treeB = new Tree(3);

        treeB.add(1);
        treeB.add(5);
        treeB.add(10);
        treeB.add(2);
        treeB.add(4);
        treeB.add(6);

        System.out.println(CompareUtils.compareTree(tree, treeB));

        System.out.println(DepthTree.getDepth(tree.getRoot()));
    }
}