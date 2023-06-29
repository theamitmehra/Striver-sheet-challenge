#include <bits/stdc++.h> 
int distinctSubstring(string &word) {
    //  Write your code here.
    set<string> ans ;

    for (int i = 0; i <= word.size(); i++)
    {
        for (int j = 1; j <= word.size()-i; j++)
        {
            ans.insert(word.substr(i, j));
        }
    }

    return ans.size();
}
