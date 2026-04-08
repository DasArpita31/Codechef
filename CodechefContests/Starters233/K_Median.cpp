#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n,k;
        cin>>n>>k;
        int a[105];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int m=n-k;
        int pos=(m+1)/2;
        int l=pos-1;
        int r=pos+k-1;
        
        for(int i=l;i<=r;i++) {
            if(i==l||a[i]!=a[i-1]) {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}