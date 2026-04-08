#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,a,b,c;
	    cin>>n>>m>>a>>b>>c;
	    if(n>m){
	        cout<<(n-m)*a + m*c<<endl;
	    }
	    else if(n<m) {
	        cout<<n*c+(m-n)*b<<endl;
	    }
	    else cout<<n*c<<endl;
	}

}
