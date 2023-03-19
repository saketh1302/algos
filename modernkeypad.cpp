#include <bits/stdc++.h>

using namespace std;
string keypad[] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
vector<string> v; 
vector<string> kw(string input,string output,int i){
   
    if(input[i]=='\0'){
        v.push_back(output);
        return v;
    }
    
    int cd = input[i] - '0';
    
    for(int j=0;j<keypad[cd].size();j++){
        kw(input,output+keypad[cd][j],i+1);
    }
    return v;
}


int main() 
{
    string input,output;
    cout<<"Enter the keypad input: ";
    cin>>input;                            //input = 23  //output= AD AE AF BD BE BF CE CD CF
    
    kw(input,output,0);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
    return 0;
}
