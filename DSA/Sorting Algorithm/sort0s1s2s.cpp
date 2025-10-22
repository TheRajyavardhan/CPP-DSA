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

void sortArray(vector<int> &arr)
{
    int mid = 0, low = 0, high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    displayArray(arr);
    return;
}

// Optimize way with time complexity = O(n), but space complexity is not 0(1) also here 2 pass has been used;
// void sortArray(vector<int>& arr){
//     int oneCount = 0;
//     int twoCount = 0;
//     int zeroCount = 0;
//     for(int val: arr){
//         if(val == 1) oneCount++;
//         else if (val == 2) twoCount++;
//         else zeroCount++;
//     }
//     oneCount += zeroCount;
//     twoCount += oneCount;
//     for(int i=0; i<arr.size(); i++){
//         if(i<zeroCount) arr[i]=0;
//         else if(i<oneCount) arr[i]=1;
//         else arr[i]=2;
//     }
//     displayArray(arr);
//     return ;
// }

int main()
{
    vector<int> arr = { 2, 0, 2, 1, 1, 0, 2, 0, 2, 1, 0, 0, 1, 2,};
    sortArray(arr);
}