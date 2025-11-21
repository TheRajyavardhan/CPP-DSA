#include <iostream>
#include <vector>
using namespace std;

void displayVec(vector<int>& vec){
    for(auto val: vec){
        cout << val << " ";
    }
    cout << endl;
    return ;
}
int main(){
    vector<int> vec (5,10); // take value of 10 at 5 indexes.

    displayVec(vec);
    cout << "capacity = "<< vec.capacity() << " size = " << vec.size()<< endl;
     // capacity = 5;
    vec.push_back(7);
    displayVec(vec);
    cout << "capacity = "<< vec.capacity()<< " size = "<< vec.size() << endl; // capacity = twice of previous value = 10;
    vec.pop_back();
    displayVec(vec);
    cout << "capacity = "<< vec.capacity() << " size = " << vec.size() << endl;// capacity stay same;
    vec.emplace_back(6);
    displayVec(vec);
    cout << "vec.at(3)= "<< vec.at(3)<< endl;
    cout << "vec.front= " << vec.front() << " vec.back ="<< vec.back()<< endl;
    vec.erase(vec.begin());
    displayVec(vec);
    vec.erase(vec.begin(), vec.begin()+4);
    displayVec(vec);
    vec.clear();
    cout << "Capacity= " << vec.capacity() << " size= "<< vec.size() << endl;
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(9);
    displayVec(vec);
    vec.insert(vec.begin()+1, 10);
    vector<int>:: iterator it;
    for(it=vec.begin(); it!=vec.end(); it++){
        cout <<*(it)<<" ";
    }
    cout << endl;
    for( auto it= vec.rbegin(); it!=vec.rend(); it++) cout<<*it<<" " ;
    cout << endl;
    cout << "vec.empty()= "<< vec.empty() << endl; // bool type function;
    vec.clear();
    cout << "vec.empty()= "<< vec.empty() << endl;
    
    return 0;
}