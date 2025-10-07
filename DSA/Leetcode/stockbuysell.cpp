#include <iostream>
#include <vector>
using namespace std;

void maxProfit(vector<int>& prices) {
       int MP = 0;
       int bestBuy = prices[0];
       for(int i=1; i<prices.size(); i++){
        if(prices[i]>bestBuy){
        MP = max(MP, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
       }
       cout << MP << endl;
        return;
    }

int main()
{
    int n;
    cout << "Enter the number of days: ";
    cin >> n;
    vector<int> prices(n);
    cout << "Enter the prices: ";
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    maxProfit(prices);
    return 0;
}
// Time complexity: O(n)
// Space complexity: O(1)
