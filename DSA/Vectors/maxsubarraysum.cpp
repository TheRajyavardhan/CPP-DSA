#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Brute force approach //

void MaxSubarray(vector<int> &vec){
    int maxSum = INT_MIN;
    for(int st=0; st<vec.size(); st++){
        int currSum = 0;
        for(int end=st; end<vec.size(); end++){
            currSum += vec[end];
            maxSum = max(maxSum, currSum);
            for(int i=st; i<end+1; i++){
                cout << vec[i] ;
            }
           cout << " "; 
        }
        cout << endl;
    }
    cout << "Maximum Subarray Sum is: " << maxSum << endl;
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
    MaxSubarray(vec);
    return 0;
}