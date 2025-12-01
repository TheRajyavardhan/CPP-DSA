#include <iostream>
using namespace std;

class CircularQueue{
int f, r;
int currsize, cap;
int *arr;

public:
CircularQueue(int size){
currsize = 0;
cap = size;
f = 0;
r = -1;
arr = new int[cap];
}

void push(int val){
if (currsize == cap){
cout << "No space" << endl;
return;
}
r = (r+1)%cap;
arr[r] = val;
currsize++;
}
void pop(){
if(currsize==0) return;
f = (f+1)%cap;
currsize--;
}
int front(){
if(empty()) return -1;
return arr[f];
}
bool empty(){
return currsize == 0;
}
};

int main(){
CircularQueue cq(3);
cq.push(1);
cq.push(2);
cq.push(3);// 1,2,3;
cq.push(4);
cq.pop();
cq.push(4); // 1,2,4;
while(!cq.empty()){
cout << cq.front() << " ";
cq.pop();
}
cout << endl;
return 0;
}
