#include<bits/stdc++.h>
using namespace std;
#define n count
#define vi vector<int>
#define vii vector<vi>

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	if (n == 0)
        return 0;

    int j = 0; // Pointer to track the last unique element

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;
}