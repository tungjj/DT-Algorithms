package aden.dev.site;

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

        tree.preorderWithStack();
    }
}