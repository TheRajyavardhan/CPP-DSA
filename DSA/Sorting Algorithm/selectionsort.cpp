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


void selectionSort(vector<int>& arr){
   for(int i=0; i<arr.size()-1; i++){
    int smallestIndex = i;
    for(int j=i+1; j<arr.size(); j++){
        if(arr[j]<arr[smallestIndex]){
            smallestIndex=j;
        }
    }
    int temp = arr[smallestIndex];
        arr[smallestIndex] = arr[i];
        arr[i] = temp;
   }
   displayArray(arr);
   return ;
}

int main(){
    vector<int> arr={5,6,4,2,1,};
    selectionSort(arr);
    return 0;
}