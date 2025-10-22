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

void mergeSort(vector<int> &A, vector<int> &B)
{
    int idx = A.size() + B.size() - 1, i = A.size() - 1, j = B.size()-1;
    A.resize(idx + 1);
    while (idx >= 0 && j >= 0)
    {
        if (i < 0)
            A[idx--] = B[j--];
        else if (A[i] >= B[j]){
            A[idx--] = A[i--];
        }
        else{
            A[idx--] = B[j--];
        }
    }
    displayArray(A);
    return;
}

int main()
{   // Write sorted Array for input;
    vector<int> A = {2, 3, 6};
    vector<int> B = {0, 3, 5};
    mergeSort(A, B);
    return 0;
}