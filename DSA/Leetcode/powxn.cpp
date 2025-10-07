#include <iostream>
using namespace std;
#include <vector>

void pow(int x, int n)
{
    int ans = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        n = n / 2;
    }
    cout << ans << endl;
    return ;
}

int main()
{
    int x, n;
    cout << "Enter the value of x and n: ";
    cin >> x >> n;
    pow(x, n);
    return 0;
}
// Time complexity: O(log n)
// Space complexity: O(1)