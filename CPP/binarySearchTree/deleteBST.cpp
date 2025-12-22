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

Node* getinorderSuccessor(Node* root){
    while(root && root->left){
        root = root->left;
    }
    return root;
}

Node* delNod(Node* root,int key){
    if(!root) return NULL;

    if(root->data > key) 
    root->left = delNod(root->left,key);
    else if(root->data < key) 
    root->right = delNod(root->right,key);
    else{
        if(!root->left){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(!root->right){
            Node* temp = root->left;
            delete root;
            return temp;   
        }
        else{
            Node* IS = getinorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNod(root->right,IS->data);
        }
    }
    return root;
}

int main(){
    vector<int> arr = {50,30,20,10,5,15,25,40,35,32,38,45,70,60,55,52,58,65,80,75,72,78,90,85,95};

    Node* root = buildBST(arr);
    cout << "before deleting the Node" << endl;
    inorderTranversal(root);
    cout << endl;
    delNod(root,78);
    cout << "after deleting the Node\n";
    inorderTranversal(root);
    cout << endl;
    return 0;
}