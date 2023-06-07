// #include <bits/stdc++.h>
#include "code.cpp"

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	unordered_map<int, int> mp;

	for(auto it : arr){
		if(mp[it]){
			return it;
		}
		mp[it]++;
	}
}
