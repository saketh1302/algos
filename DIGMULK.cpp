#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	for(int i=0;i<t;i++){
	    int n,k,m;
	    cin>>n>>k>>m;
	    string s;
	    cin>>s;
	    int x;
	    int w[1000] ;
	    for(int l=0;l<1000;l++){
	        w[i]=0;
	    }
	    int count = n;
	    while(m>0){
	    for(int j=0;j<1000;j++){
	        w[j] = (int)(s[j]-48)*k;
	        for(int k=n;k<1000;k++){
	            if(w[j]%10 > 0){
	              x= w[j];
	              w[k] = x%10;
	              w[++k] = w[j] - w[k]*10;
	              count++;
	            }
	        }
	    }
	    m--;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
