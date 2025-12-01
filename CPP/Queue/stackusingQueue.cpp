#include <iostream>
#include <queue>
using namespace std;

class Stack {
public:
queue<int> q1;
queue<int> q2;

Stack(){}

void push(int val){
q2 = q1;
while(!q1.empty()){
q1.pop();
}
q1.push(val);
while(!q2.empty()){
q1.push(q2.front());
q2.pop();
}
}

int pop(){
if(empty()){
cout<<"Empty" << endl;
return 0;
}
int ans = q1.front();
q1.pop();
return ans;
}

int top(){
return q1.front();
}

bool empty(){
return q1.empty();
}
};

int main(){
Stack s;
s.push(1);
s.push(2);
s.push(3);
while(!s.empty()){
cout << s.top() << " " ;
s.pop();
}
cout << endl;
s.pop();
return 0;
}

