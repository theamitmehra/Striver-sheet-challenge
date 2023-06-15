#include<bits/stdc++.h>
using namespace std;
#define n count
#define vi vector<int>
#define vii vector<vi>

int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.

    int que[2400] = {0};

    for (int i = 0; i < n; i++) {
        que[at[i]] += 1;
        que[dt[i] + 1] -= 1;
    }

    for (int i = 1; i < 2400; i++) {
        que[i] += que[i - 1];
    }

    int maxPlatforms = 0;
    for (int i = 0; i < 2400; i++) {
        maxPlatforms = std::max(maxPlatforms, que[i]);
    }

    return maxPlatforms;
}