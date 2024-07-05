//
// Created by Đỗ Tùng on 5/7/24.
// Link: https://www.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1
//
#include <iostream>
#include <queue>
#include <vector>


using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
    Node(int x, Node* left, Node* right): data(x), left(left), right(right) {}
};

vector<vector<int> > levelOrder(Node *node) {
    vector<vector<int> > result;
    queue<Node *> queue;

    if(node == NULL) {
        return result;
    }

    queue.push(node);

    while( queue.size() > 0) {
        int queueSize = queue.size();
        vector<int> recentLevel;

        for (int i = 0; i < queueSize; i++)
        {

            Node *topNode = queue.front();
            queue.pop();

            cout << " " << topNode->data << " ";

            recentLevel.push_back(topNode->data);

            if (topNode->left != NULL) {
                queue.push(topNode->left);
            }

            if (topNode->right != NULL) {
                queue.push(topNode->right);
            }
        }
        cout << "$"; 
        result.push_back(recentLevel);
    }

    return result;
};

int main(int argc, char const *argv[])
{
    //  1
    //     /
    //    4
    //  /   /\
    // 4     2
    Node a = Node(4);
    Node b = Node(2);
    Node c = Node(4, &a, &b);

    Node root = Node(1, &c, NULL);

    levelOrder(&root);

    return 0;
}
