// #include <bits/stdc++.h>
#include "code.cpp"

vector<int> merge(vector<int>& arr1,vector<int>& arr2,int m,int n){
	vector<int> ans;
	int i=0, j = 0;
	while(i<arr1.size() && j<arr2.size())
	{
		if(arr1[i]<arr2[j]) {
			ans.push_back(arr1[i]);
            i++;
		}
		else if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
		}
		else if(arr1[i]>arr2[j]){
			ans.push_back(arr2[j]);
			j++;
		}
	}

	while(i<arr1.size()) {
		ans.push_back(arr1[i]);
		i++;
	}

	while(j<arr2.size()) {
		ans.push_back(arr2[j]);
		j++;
	}
	
	return ans;
}
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> a1;
	for(int i=0;i<arr1.size();i++){
		if(arr1[i]!=0) a1.push_back(arr1[i]);
	}
	return merge(a1,arr2,m,n);
}