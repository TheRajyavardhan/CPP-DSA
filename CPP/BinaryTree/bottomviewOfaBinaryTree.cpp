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

map<int,int> bottomView(Node* root){
if(!root) return{};
queue<pair<Node*,int>> q;
q.push({root,0});
map<int,int>m;
while(!q.empty()){
Node* curr = q.front().first;
int currHd = q.front().second;
q.pop();
m[currHd] = curr->data;

if(curr->left) q.push({curr->left,currHd-1});
if(curr->right) q.push({curr->right,currHd+1});
}
return m;
}
};

int main(){
vector<int> arr = {1,2,9,-1,-1,-1,3,4,-1,-1,5,-1,8,-1,-1};
BinaryTree t;
int idx = -1;
Node* root = t.buildTree(arr,idx);
map<int,int> m = t.bottomView(root);
    for (auto &p : m) {
        cout << p.first << " : " << p.second << endl;
    }
    return 0;
}
