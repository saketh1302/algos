#include<bits/stdc++.h>
using namespace std;
void print(string output,int open,int close,int n,int i){
    
    if(i==2*n){
        cout<<output<<endl;
        return;
    }
    
    if(open<n){
        print(output+'(',open+1,close,n,i+1);
    }

    if(close<open){
        print(output+')',open,close+1,n,i+1);
    }

return;
}
void gb(int n){
 string output;
 print(output,0,0,n,0);

}
int main(){
    int n;
    cout<<"Enter number of brackets: ";
    cin>>n;
    
    gb(n);

    return 0;
}