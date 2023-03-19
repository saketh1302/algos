#include<bits/stdc++.h>

using namespace std;

int toh(int n,int from,int to,int aux){
 static int count=0;
    if(n==0){
        return count;
    }

    //transferring n-1 disks to auxilary rod
    toh(n-1,from,aux,to);
    cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    count++;
    //transferring n-1 disks from auxilary rod to destination rod
    toh(n-1,aux,to,from);
    return count;
}

int main(){
    int n;
    cin>>n;
    int moves=toh(n,1,3,2);
    cout<<"total moves required are "<<moves;

}