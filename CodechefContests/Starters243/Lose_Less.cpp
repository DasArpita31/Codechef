#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int w=0;
	    if(n>m) {
	        w=(n-m+1)/2;
	    }
	    int l=m-(n-2*w);
	    cout<<l<<endl;
	}

}
