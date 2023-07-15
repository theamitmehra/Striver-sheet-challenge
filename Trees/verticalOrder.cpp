#include <bits/stdc++.h>
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{

    vector<int> ans;
    queue< pair <TreeNode <int>*, pair<int, int> > > q;
    map<int,map<int,vector<int>>> mp;
    q.push({root,{0,0}});

    while(!q.empty()){
        auto temp = q.front(); q.pop();

        auto node = temp.first;

        int v = temp.second.first;
        int h = temp.second.second;

        mp[v][h].push_back(node->data);

        if(node->left) 
            q.push({node->left,{v-1,h+1}});

        if(node->right) 
            q.push({node->right,{v+1,h+1}});
    }

    for(auto i:mp){
        for(auto j:i.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
    }

    return ans;
}








