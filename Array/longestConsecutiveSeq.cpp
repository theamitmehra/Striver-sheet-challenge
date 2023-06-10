#include "code.cpp"

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    // Write your code here.

    unordered_set<int> numSet;
    int longestSequence = 0;

    // Add all numbers to the set
    for (int num : nums) {
        numSet.insert(num);
    }

    for (int num : nums) {
        if (numSet.find(num - 1) == numSet.end()) {
            int currentSequence = 1;

            while (numSet.find(num + 1) != numSet.end()) {
                num++;
                currentSequence++;
            }

            longestSequence = std::max(longestSequence, currentSequence);
        }
    }

    return longestSequence;


}