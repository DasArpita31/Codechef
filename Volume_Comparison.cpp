#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	int p=x*x*x;
	if((a*b*c)>p) cout<<"Cuboid"<<endl;
	else if((a*b*c)<p) cout<<"Cube"<<endl;
	else cout<<"Equal"<<endl;
}
