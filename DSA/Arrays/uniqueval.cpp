#include <iostream>
using namespace std;

void unique ( int arr[], int size){
    for(int i=0; i<size; i++){
        bool flag = true;
        for(int j=0; j<size; j++){
            
            if (i!=j && arr[i]==arr[j]){
                flag = false;
                break;
            }
            
        }
        if(flag==true){
                cout << arr[i] << " ";
            }
    }
    cout << endl;
    return ;
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
    unique(arr, n);
    return 0;
}