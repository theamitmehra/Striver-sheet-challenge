#include <bits/stdc++.h>

int minTimeToRot(vector<vector<int>>& grid, int n, int m) {
    int visited[n][m];
    queue<pair<pair<int, int>, int>> q;
    int cntFresh = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                q.push({{i, j}, 0});
                visited[i][j] = 2;
            } else {
                visited[i][j] = 0;
            }
            
            if (grid[i][j] == 1) {
                cntFresh++;
            }
        }
    }
    
    int maxTime = 0;
    vector<int> delRow = {-1, 0, +1, 0}; 
    vector<int> delCol = {0, +1, 0, -1};
    int cnt = 0;
    
    while (!q.empty()) {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int time = q.front().second;
        q.pop();
        
        maxTime = max(maxTime, time);
        
        for (int i = 0; i < 4; i++) {
            int r = row + delRow[i];
            int c = col + delCol[i];
            
            if (r >= 0 && r < n && c >= 0 && c < m && visited[r][c] == 0 && grid[r][c] == 1) {
                q.push({{r, c}, time + 1});
                visited[r][c] = 2;
                cnt++;
            }
        }
    }
    
    if (cnt != cntFresh) {
        return -1;
    }
    
    return maxTime;
}
