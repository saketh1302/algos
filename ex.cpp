#include <bits/stdc++.h>
using namespace std;

typedef long double C;
typedef complex<C> P;

#define X real()
#define Y imag()

int main(){
   
   P p = {4,2};
   P q = {1,2};
   cout<<p.X<<p.Y<<abs(p);
   cout<<(conj(p)*q);
    return 0;
}

