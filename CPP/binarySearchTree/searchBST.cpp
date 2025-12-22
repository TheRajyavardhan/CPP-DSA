#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root,int val){
    if(!root){
        root = new Node(val);
        return root;
    }
    
    if(root->data > val){
    root->left = insert(root->left,val);
    return root;
    }
    else{ 
    root->right = insert(root->right,val);
    return root;
    }  
}

Node* buildBST(vector<int> arr){
    Node* root = NULL;

    for(int val: arr) root = insert(root,val);

    return root;
}

void inorderTranversal(Node* root){
    if(!root) return ;

    inorderTranversal(root->left);
    cout<< root->data <<" ";
    inorderTranversal(root->right);
    return ;
}

bool searchBST(Node* root,int key){
    if(!root) return false;

    if(root->data == key) return true;
    if(root->data > key) return searchBST(root->left,key);
    else return searchBST(root->right,key);
}

int main(){
    vector<int> arr = {3,2,1,5,4,6};

    Node* root = buildBST(arr);
    cout << searchBST(root,0) << endl;
    return 0;
}