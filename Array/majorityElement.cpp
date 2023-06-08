#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
    int ck = 1;
    int th = floor(n / 2);
    int maj = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] == maj)
            ck++;
        else if (ck == 0) {
            ck = 1;
            maj = arr[i];
        } else if (arr[i] != maj) {
            ck--;
        }
    }

    if (ck != 0) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == maj)
                ans++;
        }
        if (ans > th)
            return maj;
    }

    return -1;
}