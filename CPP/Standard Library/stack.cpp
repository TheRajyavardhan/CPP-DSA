#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.emplace(5);
    cout << "s.top() = " << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.push(10);
    s.push(6);
    s.push(5);
    s.push(7);
    s.push(4);
    stack<int> s1 ;
    s1.swap(s);
    while(!s1.empty()){
        cout << s1.top() << " ";
        s1.pop();
    }
    return 0;
}