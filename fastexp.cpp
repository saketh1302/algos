#include<bits/stdc++.h>
using namespace std;

//calculates power in log(n) complexity

void findallsetbitshack(int n){
    int count=0;  //9=1001 so output=2
    while(n>0){   //7 = 111 sp output=3
        n=n&(n-1); //it removes the last set bit from the binary
        count++;
    }
    cout<<count<<endl;
}
void findallsetbits(int n){
    int count=0;
    int l=1;
    while(n>0){
        if(n&l){
            count++;
        }
        n=n>>1;
    }
    cout<<count<<endl;
}
int fastexpo(int a,int n){
    int ans=1;
    while(n>0){
        int last_bit = (n&1);
        if(last_bit)
        ans = ans*a;

        a=a*a;
        n=n>>1;
    }

    return ans;
}
int main(){
   cout<<fastexpo(3,5);
   findallsetbits(7);
   findallsetbitshack(9);
    return 0;
}