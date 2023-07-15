#include <bits/stdc++.h>
using namespace std;

class ds {
public:
    int height;
    int left;
    int right;

    ds(int h, int l, int r) {
        height = h;
        left = l;
        right = r;
    }
};

int heightOfTheTree(vector<int>& inorder, vector<int>& levelOrder, int N){
	
    int ans = 0;
    queue<ds> q;

    if(N >= 1) {
        ds temp(0, 0, N - 1);
        q.push(temp);
    }
	
    unordered_map<int, int> mp;
	
    for(int i = 0;i < N; i++) {
        mp[inorder[i]] = i;
    }

    for(int i = 0;i < N; i++) {
        auto temp = q.front();
        q.pop();

        ans = max(temp.height, ans);

        int l = temp.left;
        int r = temp.right;
        int root;

        root = mp[levelOrder[i]];

        if(root - 1 >= l) {
            ds leftSubTree(temp.height + 1, l, root - 1);
            q.push(leftSubTree);
        }

        if(root + 1 <= r) {
            ds rightSubTree(temp.height + 1, root + 1, r);
            q.push(rightSubTree);
        }
    }

    return ans;
}