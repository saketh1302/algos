#include <bits/stdc++.h>
using namespace std;
int binary(int arr[], int s, int e, int k)
{
    if(e>=s){
    int m=(s+e)/2;
    if(arr[m]==k)
    return m;
    
    if(k>arr[m]){
       // cout<<1;
        return binary(arr,m+1,e,k);
    }
    {
       // cout<<2;
       return binary(arr,s,m-1,k);
    }
    }
    return -1;
}

int main()
{

    int arr[] = { 0, 1, 2,4, 5, 6, 7};
    int n = 7;
    int target = 2;
    cout << binary(arr, 0, n - 1, target);

    return 0;
}