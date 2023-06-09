#include <bits/stdc++.h>
#include "code.cpp"
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    int N = arr.size();
    unordered_map<int, int> mp;
    for(auto it : arr){
        mp[it]++;
    }

    vector<int> ans;

    for(auto it : mp){
        if(it.second > floor(N/3)){
            ans.push_back(it.first);
        }
    }

    return ans;
}
