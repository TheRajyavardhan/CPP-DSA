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
void bubbleSort(vector<int>& arr){
    for(int i=0; i<arr.size()-1; i++){
        bool isSwap = false;
        for(int j=0; j<arr.size()-1-i; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
            isSwap=true;
            }
        }               
        if(isSwap==false){
            break;
        }         
    }
    displayArray(arr);
    return ;
}

int main(){
    vector<int> arr={5,6,4,2,1,};
    bubbleSort(arr);
    return 0;
}