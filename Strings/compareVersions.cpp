#include <bits/stdc++.h> 
int compareVersions(string a, string b) 
{
    int index_a = 0;
    int index_b = 0;

    while (index_a < a.size() || index_b < b.size()) {
    long num_a = 0;
    long num_b = 0;

    while (index_a < a.size() && a[index_a] != '.') {
        num_a = num_a * 10 + (a[index_a++] - '0');
    }

    while (index_b < b.size() && b[index_b] != '.') {
        num_b = num_b * 10 + (b[index_b++] - '0');
    }

    if (num_a > num_b) {
        return 1;
    } else if (num_a < num_b) {
        return -1;
    }

    index_a++;
    index_b++;
    }

    return 0;

    // Write your code here
}