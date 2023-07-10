
int minCharsforPalindrome(string str) {
	// Write your code here.
		int n = str.length();
        int start = 0;
        int end = n - 1;
        int res = 0;
        while (start < end) {  
            if (str[start] == str[end]) {  
                start++;  
                end--;  
            }
            else {
                res++;  
                start = 0;  
                end = n - res - 1;  
            }
        }
        return res;
}
