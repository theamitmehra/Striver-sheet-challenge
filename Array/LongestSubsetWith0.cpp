#include "code.cpp"

int LongestSubsetWithZeroSum(vector < int > nums) {

  // Write your code here
    unordered_map<int, int> sumMap;
    int max_length = 0;
    int sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];

        if (sum == 0) {
            max_length = i + 1;
        } else if (sumMap.find(sum) != sumMap.end()) {
            int length = i - sumMap[sum];
            if (length > max_length) {
                max_length = length;
            }
        } else {
            sumMap[sum] = i;
        }
    }

    return max_length;

}