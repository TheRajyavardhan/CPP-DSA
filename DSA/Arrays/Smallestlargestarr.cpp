#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array; " ;
    cin>> n ;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int smallest = INT_MAX;
    int smallIndex = 0;
    int largest = INT_MIN ;
    int largeIndex = 0;
    for(int i=0; i<n ; i++){
        if(arr[i] > largest){
            largest = arr[i];
            largeIndex = i;
        }
         if(arr[i] < smallest){
            smallest = arr[i];
            smallIndex = i;
        }
    }
    cout << "Smallest element is: " << smallest << "  index--  " << smallIndex <<  endl;
    cout << "Largest element is: " << largest << "  index--  " << largeIndex  << endl;
    return 0;

}