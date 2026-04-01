#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mx=a[0],mn=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<mn) mn=a[i];
            if(a[i]>mx) mx=a[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]!=mn && a[i]!=mx){
                count++;
            }
        }
    cout<<count<<endl;
    }
}
