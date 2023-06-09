#include <bits/stdc++.h>
#include "code.cpp"
using namespace std;

int merge(std::vector<int>& nums, int left, int mid, int right) {
    int count = 0;

    // Count the number of reverse pairs
    int i = left;
    int j = mid + 1;
    while (i <= mid && j <= right) {
        if ((long long)nums[i] > 2LL * nums[j]) {
            count += (mid - i + 1);
            j++;
        } else {
            i++;
        }
    }

    // Merge the two sorted subarrays
    std::vector<int> temp;
    i = left;
    j = mid + 1;
    while (i <= mid && j <= right) {
        if (nums[i] <= nums[j]) {
            temp.push_back(nums[i++]);
        } else {
            temp.push_back(nums[j++]);
        }
    }
    while (i <= mid) {
        temp.push_back(nums[i++]);
    }
    while (j <= right) {
        temp.push_back(nums[j++]);
    }
    for (int k = left; k <= right; k++) {
        nums[k] = temp[k - left];
    }

    return count;
}

int mergeSort(std::vector<int>& nums, int left, int right) {
    if (left >= right) {
        return 0;
    }

    int mid = left + (right - left) / 2;
    int count = mergeSort(nums, left, mid) + mergeSort(nums, mid + 1, right) + merge(nums, left, mid, right);

    return count;
}

int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
	int count = mergeSort(arr, 0, n - 1);
    return count;
}
