#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int m, int mid){
    
    int cows = 1, lastStallPos = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(arr[i]-lastStallPos >= mid){
          cows++;
          lastStallPos=arr[i];
        }
        if(cows==m) return true;
    }
    return false;
}

void aggresivecow (vector<int>& arr, int m){
    int start = 1;
   sort(arr.begin(), arr.end());
    int end = arr.back() - arr[0];
    int mid;
    int ans;

    while(start<=end){
        mid = start + (end-start)/2;

        if(isPossible(arr,m,mid)==true){
            start = mid + 1;
            ans = mid;
        }
        else {
            end = end - 1;
        }
    }
    cout << ans << endl;
    return ;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "Enter the no. of cows: ";
    cin >> m;
    if (m > n)
        return -1;
    aggresivecow(arr, m);
    return 0;
}
