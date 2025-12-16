#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

class Node{
public:
int data;
Node* left;
Node* right;

Node (int val){
data = val;
left = right = NULL;
}                                                                       
};


class BinaryTree{
public:

Node* buildTree(vector<int>& arr,int& idx){
idx++;
if(idx>=arr.size() || arr[idx]==-1) return NULL;
Node* root = new Node(arr[idx]);
root->left = buildTree(arr,idx);
root->right = buildTree(arr,idx);
return root;
}
};

int SumTree(Node* root){
if(root==NULL) return 0;
int ls = SumTree(root->left);
int rs = SumTree(root->right);
root->data = root->data + ls + rs;
return root->data;
}

int main(){
vector<int> arr = {1,2,9,-1,-1,-1,3,4,-1,-1,5,-1,8,-1,-1};
BinaryTree t;
int idx = -1;
Node* root = t.buildTree(arr,idx);
cout<< SumTree(root) << endl;
return 0;
}
