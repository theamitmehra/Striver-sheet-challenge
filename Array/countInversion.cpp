#include "code.cpp" 

long long getInversions(long long *arr, int n){
    // Write your code here.

    int count= 0;
    for(int i = 0; i<n; i++){

        for(int j = 0; j<n; j++){

            if(arr[i] > arr[j] and i <j ){
                count++;
            }
        }
    }

    return count;
}