#include <iostream>
#include <queue> 
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    
    while(!pq.empty()){
        cout << pq.top() << " " ; // give priority to highest no. by default;
        pq.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1); 
    pq2.push(2); 
    pq2.push(3); 
    pq2.push(4); 
    pq2.push(5); 

    while(!pq2.empty()){
        cout << pq2.top() << " ";
        pq2.pop();
    }
    return 0;
}