#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    set<int>s = {1,2,3,4,5};
    s.insert(10);
    s.insert(19);
    for(auto it : s){
        cout << it << " ";
    }
    cout << endl;
    multiset<int> s1 = {1,2,3,3,5,6,8,5,6,5};
    for(auto it : s1){
        cout << it << " ";
    }
    cout << endl;
    unordered_set<int> s2={5,6,1,2,8,4,1,9,3};
    for(auto it : s2){
        cout << it << " ";
    }
    return 0;
}
