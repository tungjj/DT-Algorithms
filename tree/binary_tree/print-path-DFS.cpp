#include <iostream>
#include <vector>
#include <stack>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode * left, TreeNode * right) : val(x), left(left), right(right) {}
};

void printVector(stack<TreeNode *> stack) {
    for (int i = 0; i < stack.size(); i++)
    {
        TreeNode *node = stack.pop();
        cout << node->val << "  ";
    }
}

void findingNode(TreeNode * root, int target, stack<TreeNode*> stack) {
    stack<TreeNode *> stack;
    stack.push(root);

    while(stack.size() > 0) {
        TreeNode *curr = stack.top();
        if (curr->val == target)
        {
            printVector(stack);
            break;
        }
        if(curr->left != NULL && curr->right != NULL) {
            stack.pop();
        }

        if(curr->left != NULL) {
            curr = curr->left;
        }
        // if(curr->right != NULL) {
        //     curr = curr->right;
        //     continue;
        // }
        // stack.pop();
    }

}

vecor<int> action(TreeNode * node) {
    vector<int> result;
    stack<TreeNode*> stack;

    stack.push(node);

}

int main(int argc, char const *argv[])
{
    
    /* code */
    return 0;
}
