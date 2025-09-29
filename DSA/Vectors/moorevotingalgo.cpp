#include <iostream>
#include <vector>
using namespace std;

void majorityElement(vector<int> &nums){
    int freq = 0, ans = 0;
    for(int i=0; i<nums.size(); i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==ans){
            count++;
        }
    }
    if(count > nums.size()/2){
        cout << "Majority Element is: " << ans << endl;
    }
    else{
        cout << "No Majority Element" << endl;
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
