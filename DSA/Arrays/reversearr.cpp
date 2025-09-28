#include <iostream>
using namespace std;

int reverse(int arr[], int size){
    for(int i=0; i<size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    return 0;
}


int main() {
    int n;
    cout << "Enter the size of the array: " ;
    cin>> n ;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    cout << "[ " ;
    for(int i=0; i<n ; i++){
        cout << arr[i] << " " ;
    }
    cout << "]" << endl;
    
    cout << "[ " ;
    reverse(arr, n);
    for(int i=0; i<n ; i++){
        cout << arr[i] << " " ;
    }
    cout << "]" << endl;
    return 0;
}