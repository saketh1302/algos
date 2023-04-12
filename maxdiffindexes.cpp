//Given an array A[] of N positive integers.
// The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.
// in o(n) time and o(n) space

#include<bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int N) 
    { 
        // Your code here
       
       int lmin[N],rmax[N],res =0;
       lmin[0] = arr[0];
       rmax[N-1] = arr[N-1];
       for(int i=1;i<N;i++){
           lmin[i] = min(lmin[i-1],arr[i]);
       }
       
       for(int i=N-2;i>=0;i--){
           rmax[i] = max(rmax[i+1],arr[i]);
       }
       
       int i=0,j=0;
       
       while(i<N && j<N){
           
           if(lmin[i]<=rmax[j]){
               res = max(res,j-i);
               j++;
            /* increase the j if lmin[i]<rmax[j]  that implies there can be
                  be some j with rmax[j]>arr[i]. 
            */
           }
           else{
               i++;
           }
       }
       
        return res;
       
    }

    int main(){
        int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
        int n=9;

        cout<<maxIndexDiff(arr,n);

        return 0;
    }
 