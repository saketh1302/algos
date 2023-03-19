//Given an array, check whether the array is in sorted order with recursion.

#include<bits/stdc++.h>
using namespace std;
int issorted(int a[],int n){

   if(n==1){
       return 1;
   }
   
  if(a[n-1]<a[n-2]){
      return 0;
  }
  else{
     return issorted(a,n-1);
  }
  
}
int main(){
   
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   
   int x=issorted(a,n);
   if(x==1){
       cout<<"is sorted";
   }
   else{
       cout<<"not sorted";
   }
    return 0;
}