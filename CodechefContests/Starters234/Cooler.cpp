#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int sn=(n+1)*n/2;
        int sm=(m+1)*m/2;
        cout<<sm-sn<<endl;
    }
}