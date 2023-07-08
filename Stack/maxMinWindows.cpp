#include <bits/stdc++.h>

vector<int> maxMinWindow(vector<int> &a, int n) {
  
    stack<int> st;

    vector<int> lefty(n + 1, -1);
    vector<int> righty(n + 1, n); 

    for (int i = 0; i < n; i++) {
        while (!st.empty() and a[st.top()] >= a[i]){
            st.pop();
        }

        if(!st.empty())
        {
            lefty[i] = st.top();
        }

        st.push(i);
        }

        while (!st.empty()){
        st.pop();
    }

    for(int i = n - 1; i >= 0; i--) {

        while (!st.empty() and a[st.top()] >= a[i]){
            st.pop();
        }

        if (!st.empty()){
            righty[i] = st.top();
        }

        st.push(i);
    }

    vector<int> ans(n);
    vector<int> temp(n + 1, INT_MIN);


    for (int i = 0; i < n; i++) {
        int len = righty[i] - lefty[i] - 1; 
        temp[len] = max(temp[len], a[i]);
    }

    for (int i = n - 1; i >= 1; i--){
        temp[i] = max(temp[i], temp[i + 1]);
    }

    for (int i = 1; i <= n; i++)
    ans[i - 1] = temp[i];

    return ans;
}