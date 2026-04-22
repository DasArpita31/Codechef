#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int no=100*n;
    int b=k+60*n;
    cout<<min(no,b)<<endl;
}
