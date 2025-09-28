#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array; " ;
    cin>> n ;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number to be searched: ";
    cin >> num;
    for(int i=0; i<n ; i++){
       if (num == arr[i])
       {
        cout << "Number found at index: " << i << endl;
        return 0;
       }
    }
    return -1;
}