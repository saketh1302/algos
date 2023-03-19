// given an array A , there are monsters of strength A[i][2] from A[i][0] to A[i][1]
// B are heros at point B[i][0] and has strength B[i][1]
//B can kill all the monsters with strength less then them at that point.
//print no.of monsters available after every i is excecuted in B

#include <bits/stdc++.h>
using namespace std;
int main() {
    
    vector<vector<int>> A = {{1,3,7},{2,5,5},{4,8,6}};
    vector<vector<int>> B = {{3,5},{5,8},{2,10}};

    multimap<int,int> m;
    multimap<int,int>::iterator it;

    for(int i=0;i<A.size();i++){
        for(int j=A[i][0];j<=A[i][1];j++){
            m.insert(pair<int, int>(j, A[i][2]));
        }
    }
    
    vector<int> res;
    for(int i=0;i<B.size();i++){
        for(it = m.begin();it!=m.end();){
            if(it->first == B[i][0]){
                if(it->second<=B[i][1]){
                    it=m.erase(it);
                }
                else
                it++;
            }
            else if(it->first>B[i][0]){
                break;
            }
            else
            it++;
        }
        cout<<m.size()<<" ";
        res.push_back(m.size());
    }
    return 0;
}




