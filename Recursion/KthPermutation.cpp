string kthPermutation(int n, int k) {

    int factorial = 1;
    vector<int> arr;

    for(int i = 1; i < n; i++){
        factorial = factorial * i;
        arr.push_back(i);
    }

    arr.push_back(n);
    k = k - 1;
    string ans = "";

    while(true){
        ans = ans + to_string(arr[k/factorial]);
        arr.erase(arr.begin() + k/factorial);
        if(arr.size() == 0){
            break;
        }
        k = k%factorial;
        factorial = factorial/arr.size();
    }
    
    return ans;

}