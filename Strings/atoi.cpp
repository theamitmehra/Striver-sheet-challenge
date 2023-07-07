#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    
    bool f = true;
    int dig = 0;

    for (int i = 0; i < str.size(); i++) {
        
        int rem = (int)str[i] - 48;

        if (rem == -3) {
            f = false;
        } else if (rem >= 0 && rem <= 9) {
            dig = dig * 10 + rem;
        } else {
            continue;
        }
    }

    if (f == false)
        dig = -1 * dig;

    return dig;

}