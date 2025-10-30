#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// We have to tell how many subarray are there that equal to target;

void subarraySum(vector<int>& arr, int k){
    int n=arr.size();
    int count=0;
    vector<int> prefixSum(n,0);

    prefixSum[0] = arr[0];
    for(int i=1; i<n; i++){
        prefixSum[i]= prefixSum[i-1] + arr[i];
    }

    unordered_map<int,int> m; //PS, freq
    for(int j=0; j<n; j++){
        if(prefixSum[j] == k)  count++;

        int val = prefixSum[j]-k;
        if(m.find(val) != m.end()) count+= m[val];

        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    cout << count << endl;
    return; 
}

int main(){
    int n;
    cout << "No. of element: ";
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    int target;
    cout << "Enter target sum: ";
    cin >> target;
    subarraySum(m,target);
    return 0;
}