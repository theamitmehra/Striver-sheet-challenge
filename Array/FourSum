#include "code.cpp"

string fourSum(vector<int> nums, int target, int n) {

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    return "Yes";
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    return "No";
}
