 #include<bits/stdc++.h>
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
    stack < int > st;
      int max_area = 0;
      int n = heights.size();
      for (int i = 0; i <= n; i++) {

        while (!st.empty() and (i == n or heights[st.top()] >= heights[i])) 
        {
          int height = heights[st.top()];
          st.pop();
          int width;
          if (st.empty())
            width = i;
          else
            width = i - st.top() - 1;
          max_area = max(max_area, width * height);
        }

        st.push(i);
      }
    return max_area;

 }