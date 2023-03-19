#include <bits/stdc++.h>

using namespace std;
//using recursion
int solve(vector<int> v,int n,int i,int x,vector<int> o){
    //base case
    if(i==n){
        if(x==0){
            // for(int i=0;i<o.size();i++){
            //     cout<<o[i];
            // }
            // cout<<endl;
            return 1;
        }
        return 0;
    }
    o.push_back(v[i]);
    int in = solve(v,n,i+1,x-v[i],o);
    o.pop_back();
    int ex = solve(v,n,i+1,x,o);
    
    return in + ex;
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int> o;
    
    int x=6;
    
    cout<<solve(v,v.size(),0,x,o);

    return 0;
}