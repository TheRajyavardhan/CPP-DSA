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

void kthlevelofTree(Node* root,int k,vector<int>& ans){
if(k<=0 || root==NULL) return;

if(k==1) ans.push_back(root->data);
kthlevelofTree(root->left,k-1,ans);
kthlevelofTree(root->right,k-1,ans);
return ;
}

int main(){
vector<int> arr = {1,2,9,-1,-1,-1,3,4,-1,-1,5,-1,8,-1,-1};
BinaryTree t;
int idx = -1;
Node* root = t.buildTree(arr,idx);
int k = 3;
vector<int> ans;
kthlevelofTree(root,k,ans);
for(int temp: ans){
cout << temp << " " ;
}
cout << endl;
return 0;
}
