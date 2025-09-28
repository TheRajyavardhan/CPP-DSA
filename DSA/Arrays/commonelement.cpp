#include <iostream>
using namespace std;

int common(int arr[], int s1, int brr[], int s2){
    for(int i=0; i<s1; i++){
        for(int j=0; j<s2; j++){
            if(arr[i]==brr[j]){
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
int main() {
    int s1;
    cout << "Enter the size of the array: ";
    cin >> s1;
    int arr[s1];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < s1; i++) {
        cin >> arr[i];
    }
     int s2;
    cout << "Enter the size of the array: ";
    cin >> s2;
    int brr[s2];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < s2; i++) {
        cin >> brr[i];
    }
    common(arr, s1, brr, s2);
    return 0;
}