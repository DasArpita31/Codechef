#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        if(m%n==0 && n>1) cout<<m/n<<endl;
        else if(m%2==0 && n%2==0) cout<<2<<endl;
        else cout<<1<<endl;
    }
}