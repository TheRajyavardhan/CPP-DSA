#include <iostream>
#include <vector>
using namespace std;

void linearSearch(vector<int> &vec, int key)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (key == vec[i])
        {
            cout << "Found the number at index " << i << endl;
            return;
        }
    }
    cout << "-1" << endl;
    return;
}

int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int key;
    cout << "Enter the number to be searched: ";
    cin >> key;
    linearSearch(vec, key);
    return 0;
}
