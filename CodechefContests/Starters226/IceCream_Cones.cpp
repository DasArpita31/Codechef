#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int X,Y,N;
        cin>>X>>Y>>N;
        if((Y*N>X)){
            cout<<"0"<<endl;
        }
        else{
            cout<<X-(Y*N)<<endl;
        }
    }
}
