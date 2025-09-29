#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Optimize approach //

void majorityElement(vector<int> &nums){
   int n = nums.size();

   //sorting the array//
   sort(nums.begin(), nums.end());

   //Frequency count//
   int freq = 1;
   for(int i=0; i<n; i++){
       if(nums[i]==nums[i-1]){
        freq++;
       }
       else{
         freq = 1;
       }
       if(freq >n/2){
        cout << "Majority Element is: " << nums[i] << endl;
        return;
       }
   }
   return ;
}

int main(){
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector: ";
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    majorityElement(vec);
    return 0;
}
// Time Complexity: O(nlogn) + O(n) = O(nlogn)