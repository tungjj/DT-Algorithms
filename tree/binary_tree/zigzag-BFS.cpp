#include <iostream>
#include <vector>
#include <queue>

// Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
using namespace std;


struct TreeNode
{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode * left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector< vector<int> > checkVector(TreeNode * root) {
    vector< vector<int> > vectorResult;
    queue<TreeNode *> queue;

    if(root == NULL ) {
        return vectorResult;
    }
    queue.push(root);
    int level = 1;

    while(queue.size() > 0) {
        vector<int> currentVector;
        int queueSize = queue.size();

        for (int i = 0; i < queueSize; i++)
        {
            TreeNode *node = queue.front();
            queue.pop();

            currentVector.push_back(node->val);

            if (node->left != NULL) {
                queue.push(node->left);
            }

            if (node->right != NULL) {
                queue.push(node->right);
            }
        }
        
        if(level%2 == 0) {
            reverse(currentVector.begin(), currentVector.end());
        }

        vectorResult.push_back(currentVector);
        level++;
    }

    return vectorResult;
}


int main(int argc, char const *argv[])
{

    TreeNode a = TreeNode(15);
    TreeNode b = TreeNode(7);

    TreeNode c = TreeNode(20, &a, &b);
    TreeNode d = TreeNode(9);
    TreeNode root = TreeNode(3, &d, &c);

    checkVector(&root);
    /* code */
    return 0;
}
    