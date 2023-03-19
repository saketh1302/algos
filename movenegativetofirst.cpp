#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1,9,8,4,-1,-4,-5,0,6,0};

    int i=0,j=0;
    int f=0;
     
    while(arr[i]<0){
        i++;
    }
    j=i;

    for(;i<11;i++){
        if(arr[i]<0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;

            j++;
        }
    }




  for(int i=0;i<11;i++){
    cout<<arr[i]<<" ";
  }

    return 0;
}