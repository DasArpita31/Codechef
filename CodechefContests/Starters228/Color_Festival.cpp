#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=1;
        int c[n];
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        sort(c,c+n);
        for(int i=1;i<n;i++){
            if(c[i]!=c[i-1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
