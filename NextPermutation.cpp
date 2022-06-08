#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    
      int idx = -1;

   for(int i = n - 2; i >= 0; --i){

       if(permutation[i] < permutation[i + 1]){

           idx = i;

            break;

       }

   }

   

   if(idx == -1){

       sort(permutation.begin(), permutation.end());

       return permutation;

   }

 

   int firstBigger = -1;

   for(int i = n - 1; i > idx; --i){

       if(permutation[i] > permutation[idx]){

           firstBigger = i;

           break;

       }

   }

   

   swap(permutation[idx], permutation[firstBigger]);

   reverse(permutation.begin() + idx + 1, permutation.end());

   

   return permutation;
}