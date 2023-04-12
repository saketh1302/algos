//given a number , find possibilities of keeping +,- inbetween the numbers so,that the total sum becomes 0
// 26712
// 2 - 6 + 7 - 1 - 2
// 2 + 6 - 7 + 1 - 2
// outputs are -+-- or +-+-

#include <bits/stdc++.h>

using namespace std;
void fun(vector<int> arr,int n,string o,int sum,int i){
    // cout<<sum<<" ";
    if(i==(n)){
        if(sum==0){
            cout<<o<<" ";
        }
        return;
    }
    
    fun(arr,n,o+"+",sum+arr[i] ,i+1);
    fun(arr,n,o+"-",sum-arr[i],i+1);
    
}
int main()
{
    int num = 26712;
    vector<int> arr;
    string o="";
    while(num>0){
        arr.push_back(num%10);
        num = num/10;
    }
    fun(arr,arr.size(),o,arr[0],1);

    return 0;
}
