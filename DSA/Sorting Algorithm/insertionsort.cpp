#include <iostream>
#include <vector>
using namespace std;

void displayArray(vector<int>& arr){
    for(int val: arr){
        cout<<" "<< val ;
    }
    cout << endl;
    return ;
}

// Dutch National Flag algorithm, time and space complexity-> O(n) & O(1);
void insertionSort(vector<int>& arr){
   for(int i=1; i<arr.size(); i++){
    int current = arr[i];
    int prev = i-1;
    while(prev>=0 && arr[prev]>current){
        arr[prev+1] = arr[prev];
        prev --;
    }
    arr[prev+1]=current;
   }
   displayArray(arr);
   return ;
}

int main(){
    vector<int> arr={5,6,4,2,1,0};
    insertionSort(arr);
    return 0;
}