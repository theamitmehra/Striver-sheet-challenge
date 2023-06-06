// #include <bits/stdc++.h> 
#include "code.cpp"

long long maxSubarraySum(int arr[], int n)
{
    long long maximumSum = INT_MIN;
    long long currentSum = 0;
    
    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        if (currentSum < 0) {
            currentSum = 0;
        }
        maximumSum = max(maximumSum, currentSum);
    }
    
    return maximumSum;
}