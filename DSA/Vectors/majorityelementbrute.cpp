#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach //

void majorityElement(vector<int> &nums){
    int n = nums.size();
    
    for(int i=0; i<n; i++){
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if (count > n/2){
            cout << "Majority Element is: " << nums[i] << endl;
            return;
        }
    }
    return;
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