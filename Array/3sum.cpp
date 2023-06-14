#include<bits/stdc++.h>
using namespace std;
#define n count
#define vi vector<int>
#define vii vector<vi>


vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> triplets;
    
    // Sort the array in non-decreasing order
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicate elements
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        
        int left = i + 1;             // Pointer starting from the next element
        int right = n - 1;            // Pointer starting from the end
        
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            
            if (sum == K) {
                // Found a triplet
                triplets.push_back({arr[i], arr[left], arr[right]});
                
                // Skip duplicate elements
                while (left < right && arr[left] == arr[left + 1])
                    left++;
                while (left < right && arr[right] == arr[right - 1])
                    right--;
                
                left++;
                right--;
            } else if (sum < K) {
                // Move the left pointer towards right
                left++;
            } else {
                // Move the right pointer towards left
                right--;
            }
        }
    }
    
    return triplets;
}
