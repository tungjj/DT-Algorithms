#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector< vector<int> > checkVector(TreeNode * root) {
    vector< vector<int> > vectorResult;
    queue<TreeNode *> queue;

    if(root == NULL ) {
        return vectorResult;
    }
    queue.push(root);

    while(queue.size() > 0) {
        vector<int> currentVector;
        int queueSize = queue.size();

        for (int i = 0; i < queueSize; i++)
        {
            TreeNode *node = queue.front();
            queue.pop();

            currentVector.push_back(node->val);

            queue.push(node->left);
            queue.push(node->right);
            /* code */
        }
        vectorResult.push_back(currentVector);
    }

    return vectorResult;
}

int main(int argc, char const *argv[])
{
    TreeNode a = TreeNode(1);
    TreeNode b = TreeNode(2);
    TreeNode root = TreeNode(3, &a, &b);

    cout << "asfd";

    return 0;
}
