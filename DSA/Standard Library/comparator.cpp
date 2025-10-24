#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2 ){
    return p1.second > p2.second;
}

int main(){
    vector<pair<int,int>> vec = {{1,2},{3,4},{8,4},{4,9}};
    sort(vec.begin(),vec.end(),comparator);
    for(auto it:vec){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}