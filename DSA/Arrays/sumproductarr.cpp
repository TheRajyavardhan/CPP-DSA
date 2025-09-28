#include <iostream>
using namespace std;

int main(){
     int n;
    cout << "Enter the size of the array: " ;
    cin>> n ;
     int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int product = 1;
    cout << "[ " ;
    for(int i=0; i<n ; i++){
        cout << arr[i] << " " ;
        sum+=arr[i];
        product*=arr[i];
    }
    cout << "]" << endl;
    cout << "Sum and Product of the array is: " << sum << "  " << product << endl;
    return 0;
}