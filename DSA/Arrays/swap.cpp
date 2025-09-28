#include <iostream>
#include <climits>
using namespace std;

int swap(int arr[], int size)
{
    int min = INT_MAX;
    int minIndex = 0;
    int max = INT_MIN;
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minIndex = i;
        }

        if (max < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of the array; ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    swap(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}