#include <iostream>
#include <vector>
#include <algorithm>

int partition(std::vector<int>& arr,int st,int end){
    int pivot = arr[end];
    int idx =st;
    for(int j=st; j<end; j++){
        if(arr[j]<=pivot){
            std::swap(arr[j],arr[idx++]);
        }
    }
    
    std::swap(arr[idx],arr[end]);
    return idx;
}

void QuickSort(std::vector<int>& arr,int st, int end){
    if(st<end){

        int pivIdx = partition(arr,st,end);

        QuickSort(arr,st,pivIdx-1); // lesser side;
        QuickSort(arr,pivIdx+1,end); // larger side;
    }
    return ;
}

int main(){
    // int n;
    // std::cout << "Enter the no. of elements: " ;
    // std::cin >> n;

    // std:: vector<int> arr(n);
    // for(int i=0; i<n; i++){
    //     std:: cin >> arr[i];
    // }
    std::vector<int> arr = {3,5,7,2,8};
    QuickSort(arr,0,4);

    for(int i=0; i<arr.size(); i++){
        std:: cout << arr[i] << " ";
    }
    return 0;
}