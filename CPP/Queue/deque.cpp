#include <iostream>
#include <deque>
using namespace std;

int main(){
deque<int> q;
q.push_back(1);
q.push_back(2);
q.push_front(3);
q.push_back(4);

while(!q.empty()){
cout<< q.front() << " " ;
q.pop_front();
cout<< q.back() << " " ;
q.pop_back();
}
return 0;
}
