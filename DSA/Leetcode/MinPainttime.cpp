#include <iostream>
#include <vector>
using namespace std;

bool isFeasible (vector <int>& arr, int m, int mid){
   int painter = 1;
   int paintBoard = 0;
   for(int i=0; i<arr.size(); i++){
    if(arr[i]+paintBoard<=mid){
        paintBoard += arr[i];
    }
    else{ 
        paintBoard = arr[i];
        painter++;
    }   
   } 
   return painter > m ? false : true ;  
}

void minPainttime(vector<int> &arr, int m){
    int start = 0;
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
    }
    int end = sum;
    int ans;
    while (start<=end){
        int mid = start + (end  - start)/2;
        if(isFeasible(arr, m, mid)==true){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout << ans << endl;
    return;
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
    cout << "Enter the no. of painter: ";
    cin >> m;
    if (m > n)
        return -1;
    minPainttime(arr, m);
    return 0;
}
