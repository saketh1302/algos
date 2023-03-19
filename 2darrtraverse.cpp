/*  1  2  3  4
   14 15 16  5
   13 20 17  6
   12 19 18  7
   11 10  9  8
   
   output 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    int k[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>k[i][j];
        }
    }
    
    int a=n,b=m,im=1,jm=1;
    
    while(a!=ceil(n/2) && b!=ceil(m/2)){
        for(int j=jm;j<=b;j++){
            cout<<k[im][j]<<" ";
        }
        
        for(int i=im+1;i<a;i++){
            cout<<k[i][b]<<" ";
        }
        
        for(int j=b;j>im;j--){
            cout<<k[a][j]<<" ";
        }
        
        for(int i=a;i>im;i--){
            cout<<k[i][jm]<<" ";
        }
        
        a--;
        b--;
        jm++;
        im++;
    }

    return 0;
}
