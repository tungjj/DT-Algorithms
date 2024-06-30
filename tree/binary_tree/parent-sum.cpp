#include <iostream>

using namespace std;

struct Node
{
    int value;
    struct Node* left;
    struct Node* right;
    
};
Node* createNode(int value) {
    Node *temp = new Node;
    temp->value = value;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

bool checkParentSum(Node *root) {
    if(root->left == NULL && root->right == NULL) {
        return true;
    }

    return (root->value == (root->left->value + root->right->value)) && (checkParentSum(root->left)) && (checkParentSum(root->right));
}
//        35
//       /   \
//      20  15
//     /  \  /  \
//    15 5 10    5 
int main(int argc, char const *argv[])
{
    /* code */
    Node *a = createNode(35);
    Node *a1= createNode(20);
    Node *a2 = createNode(15);
    Node *a11 = createNode(15);
    Node *a12 = createNode(5);


    a->left = a1;
    a->right = a2;
    a1->left = a11;
    a1->right = a12;

    cout  << checkParentSum(a);

    return 0;
}
