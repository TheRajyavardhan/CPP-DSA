#include <iostream>
using namespace std;
#include <vector>

int main(){
    pair<int, int> p={3,5};
    pair<int, char> p1={3,'a'};

    cout << "first = " << p.first << endl;
    cout << "second = " << p.second << endl;
    
    // can put pair into another pair;
    pair<int , pair<int, int>> p2={2,{4,5}};
    cout <<  "p2.second.second = " << p2.second.second << endl;
    
    vector<pair<int,int>> vec = {{1,2},{3,4},{5,6}};
    cout << "vec.at(2).second = " << vec[2].second << endl;

    vec.emplace_back(2,5);
    cout << "vec.back().first = " << vec.back().first << endl;
    cout << "vec.back().second = " << vec.back().second << endl;

    vec.push_back({1,1});
    cout << "vec.back().second = " << vec.back().second << endl;
}