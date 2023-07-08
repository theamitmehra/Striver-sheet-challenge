#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
 	// Write your code here.

	stack<int> st;

	for(int i = 0; i<n; i++){
		st.push(i);
	}

	while(st.size() != 1){
		auto f = st.top(); st.pop();
		auto g = st.top(); st.pop();

		if(knows(f, g)){
			st.push(g);
		}
		else{
			st.push(f);
		}
	}



	//verfication

	int top = st.top();

	for(int i=0; i<n; i++){
	 	if ((top != i) && (knows(top, i) || !knows(i, top))) return -1;
	}

	return top;
}