#include <bits/stdc++.h>

int subarraysXor(vector<int> &nums, int x)
{
    //    Write your code here.
    unordered_map<int, int> xorMap;
    xorMap[0] = 1;
    int count = 0;
    int currentXOR = 0;

    for (int i = 0; i < nums.size(); ++i) {
        currentXOR ^= nums[i];

        if (xorMap.find(currentXOR ^ x) != xorMap.end()) {
            count += xorMap[currentXOR ^ x];
        }

        xorMap[currentXOR]++;
    }

    return count;
}