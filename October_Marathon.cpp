#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int time=11*x;
    if(time<33) cout<<"GOLD";
    else if(time<66) cout<<"SILVER";
    else cout<<"BRONZE";
}