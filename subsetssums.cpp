//all possible subsets possible in an array

#include <bits/stdc++.h>

using namespace std;
//using recursion
set<int> s;
void solve(vector<int> v,int n,int i,int sum){
    //base case
    if(i==n){
        s.insert(sum);
        // cout<<sum<<" ";
        return ;
    }
    
    solve(v,n,i+1,sum+v[i]);
    solve(v,n,i+1,sum);
    
    
    
}
int main()
{
    vector<int> v = {5,4,3};       // output 0 3 4 5 7 8 9 12
    int sum=0;
    solve(v,v.size(),0,sum);
    for(auto it:s){
        cout<<it<<" ";
    }

    return 0;
}