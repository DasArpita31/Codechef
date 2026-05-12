#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int a=x,b=y,c=z;
        if(a>b) swap(a,b);
        if(b>c) swap(b,c);
        if(a>b) swap(a,b);

        if(a+b>c){
            cout<<0<<endl;
        }
        else{
            cout<<(c-(a+b)+1)<<endl;
        }
    }
}