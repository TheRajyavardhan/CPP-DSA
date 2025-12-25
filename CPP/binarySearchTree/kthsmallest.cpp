#include<iostream>
#include<vector>
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

void kthSmallest(Node* root, int& k){
    if(!root) return;
    
    kthSmallest(root->left,k);
    k--;
    if(k==0){
        cout << root->data << endl;
        return;
    }
    kthSmallest(root->right,k);
    return ;
}

int main(){
    vector<int> arr = {3,2,1,5,4,6};

    Node* root = buildBST(arr);
    inorderTranversal(root);
    cout << endl;
    int k = 4;
    kthSmallest(root,k);
    return 0;
}