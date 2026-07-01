#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	     int x,y;
	    cin>>x>>y;
	    int ans=0;
        for (int k=x;k>y;k--){
        ans+=(k+9)/10;
        }
        cout<<ans<<endl;
	}
}
