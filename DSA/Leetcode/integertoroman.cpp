#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> value = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"}, {1, "I"}
        };

        string result = "";

        for (auto &it : value) {
            while (num >= it.first) {
                result += it.second;
                num -= it.first;
            }
        }

        return result;
    }
    };

int main() {
    Solution s;
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Roman numeral: " << s.intToRoman(num) << endl;
    return 0;
}
