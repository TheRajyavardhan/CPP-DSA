#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &vec){
    for(int i = 0; i< vec.size()/2; i++){
        int temp = vec[i];
        vec[i] = vec[vec.size()-i-1];
        vec[vec.size()-i-1] = temp;
    }
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    return ;
}

int main(){
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector: ";
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    reverseVector(vec);
    return 0;
}