#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.

    unordered_map<char, int> mp;

    for(auto s : str1){
        mp[s]++;
    }

    unordered_map<char, int> up;

    for(auto s : str2){
        up[s]++;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        if(up[it->first] != it->second){
            return false;
        }
    }

    return true;
}