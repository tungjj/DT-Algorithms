#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode * left, TreeNode * right): val(x), left(left), right(right) {}
};

TreeNode * lowestCommonAncestor(TreeNode * node, int p, int q) {
    if(node == NULL) {
        return NULL;
    }
    int currentValue = node->val;
    if (currentValue == p || currentValue == q)
    {
        return node;
    }
    TreeNode * leftValue = lowestCommonAncestor(node->left, p, q);
    TreeNode * rightValue = lowestCommonAncestor(node->right, p, q);

    if(leftValue && rightValue) {
        return node;
    }

    return leftValue ? leftValue : rightValue;
}

int main(int argc, char const *argv[])
{

    TreeNode _4 = TreeNode(4);
    TreeNode _6 = TreeNode(6);
    TreeNode a = TreeNode(1, &_4, &_6);
    TreeNode b = TreeNode(3);
    TreeNode root = TreeNode(5, &a, &b);

    TreeNode *result = lowestCommonAncestor(&root, 4, 6);
    cout << result->val;
    /* code */
    return 0;
}
