#include<iostream>
// #include 
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

pair<int, bool> getHeightAndCheckBalanced(TreeNode* root) {

    if (root == NULL) {
        return {0, true};
    }
    pair<int, bool> checkLeft = getHeightAndCheckBalanced(root->left);
    pair<int, bool> checkRight = getHeightAndCheckBalanced(root->right);

    int height = max(checkLeft.first, checkRight.first) + 1;
    bool subTreeHeightDiff =
        abs(checkLeft.first - checkRight.first) < 2 &&
        checkLeft.second && checkRight.second;

    return {height, subTreeHeightDiff};
}
bool isBalanced(TreeNode* root) {
    return getHeightAndCheckBalanced(root).second;
}

int main(int argc, char const *argv[])
{
    TreeNode a = TreeNode(5);
    TreeNode b = TreeNode(8);
    TreeNode root = TreeNode(10, &a, &b);

    cout << isBalanced(&root);
    return 0;
}
