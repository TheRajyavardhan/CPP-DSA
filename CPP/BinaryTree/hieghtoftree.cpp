#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int val)
    {
        data = val;
        right = left = NULL;
    }
};
static int idx = -1;
Node *buildTree(vector<int> arr)
{
    idx++;
    if (arr[idx] == -1)
        return NULL;
    Node *root = new Node(arr[idx]);
    root->left = buildTree(arr);
    root->right = buildTree(arr);
    return root;
}

// int heightofTree(Node *root)
// {
//     int height = 1;
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node *curr = q.front();
//         q.pop();
//         if (curr == NULL)
//         {
//             if (!q.empty())
//             {
//                 height++;
//                 q.push(NULL);
//                 continue;
//             }
//             else
//                 break;
//         }
//         if (curr->left != NULL)
//         {
//             q.push(curr->left);
//         }
//         if (curr->right != NULL)
//         {
//             q.push(curr->right);
//         }
//     }
//     return height;
// }
int heightofTree(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = heightofTree(root->left);
    int rightHeight = heightofTree(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int countofNode(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = countofNode(root->left);
    int rightHeight = countofNode(root->right);
    return leftHeight+rightHeight+1;
}

int sumofNode(Node* root) {
    int rootsum = 0;
    if (root == NULL) {
        return 0;
    }
    else rootsum = root->data;
    int leftHeight = sumofNode(root->left);
    int rightHeight = sumofNode(root->right);
    return leftHeight+rightHeight+rootsum;
}

int main()
{
    vector<int> arr = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(arr);
    cout << "Root Node: " << root->data << endl;
    cout << "Height of Tree: " << heightofTree(root) << endl;
    cout << "Count of Nodes: " << countofNode(root) << endl;
    cout << "Sum of Nodes: " << sumofNode(root) << endl;

    return 0;
}