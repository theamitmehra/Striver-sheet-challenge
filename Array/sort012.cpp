#include "code.cpp"

void sort012(int *arr, int n)
{
   int count0 = 0, count1 = 0, count2 = 0;

   for(int i = 0; i<n; i++){
      if(arr[i] == 0){
         count0++;
      }
      else if(arr[i] == 1){
         count1++;
      }
      else if(arr[i] == 2){
         count2++;
      }
   }

   for(int i = 0; i<n; i++){
      if(count0){
         arr[i] = 0;
         count0--;
      }
      else if(count1){
         arr[i] = 1;
         count1--;
      }
      else if(count2){
         arr[i] = 2;
         count2--;
      }
   }

}

