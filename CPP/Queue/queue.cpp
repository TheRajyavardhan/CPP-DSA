#include <iostream>
using namespace std;

class Node{
public:
int val;
Node* next;
Node(int v){
val = v;
next = NULL;
}
};

class Queue{
Node* head;
Node* tail;
public:

Queue(){
head = tail = NULL;
}
void push(int val){
Node* newNode = new Node(val);
if(empty()) head=tail=newNode;
else{ 
tail->next = newNode;
tail = newNode;
}
}

void pop(){
if(empty()){
cout<< "It is empty";
return ;
}
else{
Node* temp = head;
head=head->next;
delete temp;
}
}
bool empty(){
return head == NULL;
}
int front(){
if(empty()) return -1;
return head->val;
}
};

int main(){
Queue q;
q.push(1);
q.push(2);
q.push(3);
while(!q.empty()){
cout << q.front() << " ";
q.pop();
}
return 0;
}
