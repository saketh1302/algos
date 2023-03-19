#include <bits/stdc++.h>
using namespace std;


int main(){
   
   int a[] = {5, 5, 10, 100, 10, 5};

   int m[6];
   m[0] = a[0];
   m[1] = max(a[0],a[1]);          //bottom up approach
   for(int i=2;i<6;i++)                    
    m[i] = max(a[i]+m[i-2],m[i-1]);
 //recursive fn 
/*
                    a[0]  if i=0
         m[i]   =   max(a[0],a[1])  if i=1
                    max(a[i]+m[i-2],m[i-1])
 */
   cout<<m[5];

   int p=a[0],q=max(a[0],a[1]);
   int k=0,l=0;
   for(int i=2;i<6;i++){
      if(q>l)
      l=q;                           //o(1) memory
      int temp = max(a[i]+p,q);
      p=q;
      q = temp;
   }

   cout<<q;





   /*
     no 3 contiguous  (2 can be)

     recursive fn

     m[i]   =   max(m[i-1]  ,  a[i-1]+m[i-2]  ,  a[i]+a[i-1]+m[i-3])
   
   */
    return 0;
}