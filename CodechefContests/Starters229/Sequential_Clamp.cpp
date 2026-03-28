#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i]>>b[i];
        }
        int y=100;
        for(int i=1;i<=n;i++){
            if(y<a[i]){
            y=a[i];
            }
            else if(y>b[i]){
            y=b[i];
            }
        }
        cout<<y<<endl;
    }
}
