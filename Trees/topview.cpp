#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.

    vector<int> ans; 
    
    if(root == NULL) return ans; 
   
    map<int,int> mp;  //created a map
    
    queue<pair<TreeNode<int>*, int>> q; 
    q.push({root, 0}); 

    while(!q.empty()) {
        auto it = q.front(); 
        q.pop(); 
        auto node = it.first; 
        int line = it.second; 
        if(mp.count(line) == false) mp[line] = node->val; 
        
        if(node->left != NULL) {
            q.push({node->left, line-1}); 
        }
        
        if(node->right != NULL) {
            q.push({node->right, line + 1}); 
        }
        
    }
    
    for(auto it : mp) {
        ans.push_back(it.second); 
    }
    return ans; 
}

