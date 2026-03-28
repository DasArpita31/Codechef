#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x<y){
        cout<<"Bob"<<endl;
    }
    else if(x>y){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
}
