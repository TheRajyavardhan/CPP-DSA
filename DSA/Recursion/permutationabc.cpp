#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void displayArray(string& arr){
    cout << "[";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout<< "]" << endl;
    return ;
}

void getPerms(string& arr, int idx){

    if(idx==arr.length()){
         displayArray(arr);
         return;
    }
    for(int i=idx; i<arr.length(); i++){
       swap(arr[idx],arr[i]);
       getPerms(arr,idx+1);
       swap(arr[idx],arr[i]);
    }

    return ;
}

int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin,s);
    // int i = 0;
    sort(s.begin(), s.end());
    getPerms(s,0);
    return 0;
}

// time complexity = 2^n * O(1);