#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int start = 0;      // ✅ renamed from left
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            if (lastSeen.count(c) && lastSeen[c] >= start)
                start = lastSeen[c] + 1;

            lastSeen[c] = right;
            maxLen = max(maxLen, right - start + 1);
        }

        return maxLen;
    }
};
