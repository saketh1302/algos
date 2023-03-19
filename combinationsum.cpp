//litte modified target sum 
//**************

#include <bits/stdc++.h>

using namespace std;
//using recursion
// to get unique and sorted elements insert into a set
int solve(vector<int> v,vector<int> o,int n,int i,int x){
    //base case
    if(x<0){
        return 0;
    }
   if(i==n){
        if(x==0){
            for(int j=0;j<o.size();j++){
               cout<<o[j]<<" ";
            }
            cout<<endl;
            return 1;
        }
        
            return 0;
        
    }
    // include has 2 options to include again and exclude

    /*
    optimal solution
            for(i;i<A.size();i++){
               if(A[i]==A[i-1]){
                   continue;
               }
               o.push_back(A[i]);
               solve(res,o,A,B-A[i],i);
               o.pop_back();
           }
    
    */
   o.push_back(v[i]);
    int in = solve(v,o,n,i,x-v[i]);
    o.pop_back();
    int ex = solve(v,o,n,i+1,x);
    
    return in+ex;
    
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int> o;
    
    int x=6;
    
    cout<<solve(v,o,v.size(),0,x);

    return 0;
}