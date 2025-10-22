#include <vector>
#include <iostream>
using namespace std;

void displayArray(vector<int> &arr)
{
    for (int val : arr)
    {
        cout << val << " ";
    }
    return;
}

void mergeSort(vector<int> &arr, vector<int> &brr)
{
    int i = 0, j = 0, count = 0;
    int newSize = arr.size() + brr.size();
    vector<int> crr(newSize);
    while (count < newSize)
    {
        if (i >= arr.size())
        {
            crr[count] = brr[j];
            j++;
            count++;
        }
        else if (j >= brr.size())
        {
            crr[count] = arr[i];
            i++;
            count++;
        }

        else if (arr[i] < brr[j])
        {
            crr[count] = arr[i];
            count++;
            i++;
        }
        else if (brr[j] < arr[i])
        {
            crr[count]++;
            j++;
        }
        else
        {
            crr[count] = arr[i];
            crr[count + 1] = brr[j];
            count += 2;
            i++;
            j++;
        }
    }
    displayArray(crr);
    return;
}

int main()
{    // Both array should be sorted in itself;
    vector<int> arr = {1, 2, 3, 4};
    vector<int> brr = {0, 1, 2, 2};
    mergeSort(arr, brr);
    return 0;
}