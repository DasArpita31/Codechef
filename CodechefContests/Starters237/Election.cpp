#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int m=(n/2)+1;
    int x=max(0,m-k);
    cout<<x<<endl;
}
