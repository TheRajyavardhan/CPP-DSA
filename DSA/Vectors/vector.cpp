#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<int> vec = {1,4,8};
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // vector<int> vec2(3,0);
    // cout << vec2[0] << endl;
    // cout << vec2[1] << endl;
    // cout << vec2[2] << endl;
    // vector <int> vec3 = {1,2,3,4};
    // for(int val : vec3){
    //     cout << val << " ";
    // }
    // cout << endl;


    // // Functions of vector: 
    // vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f'};
    // cout << "Size of vector: " << vec.size() << endl;

    // vec.push_back('g');
    // cout << "Size of vector after push_back: " << vec.size() << endl;

    // vec.pop_back();
    // cout << "Size of vector after pop_back: " << vec.size() << endl;

    // cout << "Front value: " << vec.front() << endl;
    // cout << "back value: " << vec.back() << endl;
    // cout << "Value at index 2: " << vec.at(2) << endl;

    // Dynamic and static memory allocation
    vector<int> vec;
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    vec.push_back(1);
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    vec.push_back(2);
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    vec.push_back(3);
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    vec.push_back(4);
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    vec.push_back(5);
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    return 0;
}