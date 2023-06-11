#include <bits/stdc++.h>
using namespace std;

int uniqueSubstrings(string input) {
    int n = input.size();
    int maxLength = 0;
    int start = 0;
    unordered_set<char> charSet;

    for (int i = 0; i < n; i++) {
        char currentChar = input[i];

        // Check if the current character is already present in the set
        while (charSet.count(currentChar) > 0) {
            charSet.erase(input[start]);
            start++;
        }

        charSet.insert(currentChar);
        maxLength = max(maxLength, i - start + 1);
    }

    return maxLength;
}
