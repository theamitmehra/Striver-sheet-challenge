#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	int min;
	stack<int> st;
	
	public:
		
		minStack() 
		{ 
			// Write your code here.
		}
		
		void push(int num)
		{
			if(st.empty()){
				min = num;
				st.push(num);
			}
			else{
				if(min <= num){
					st.push(num);
				}
				else{
					int prev = num;
					num = 2*num - min;
					min = prev;
					st.push(num);
				}
			}
		}
		
		int pop()
		{
			if(!st.empty()){
				int val = st.top();
				if(val >= min){
					st.pop();
					return val;
				}
				else{
					int prev = min;
					min = 2*min - val;
					st.pop();
					return prev;
				}
			}
			return -1;
		}
		
		int top()
		{
			if(!st.empty()){
				int val = st.top();
				if(val >= min) return val;
				else return min;
			}
			return -1;
		}
		
		int getMin()
		{
			if(!st.empty()){
				return min;
			}
			return -1;
		}
};