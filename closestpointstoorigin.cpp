//find the top k closest points to the origin using heap

//add a (pair and distance) to the min heap
//or
//use the below operator function

#include <bits/stdc++.h>

using namespace std;

class compare{
    public:
    bool operator()(pair<int,int> a, pair<int,int> b){
        return a.second > b.second;
    }
};

bool gt(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}
int main()
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare> p;
    // sort(p.begin(),p.end(),greater)
    p.push({1,2});
    p.push({1,0});
    p.push({3,4});
    
    pair<int,int> x = p.top();
    cout<<x.first<<x.second;
    return 0;
}
