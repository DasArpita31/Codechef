#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int mx=max(a[i],a[j]);
                int dis=min(mx/2,100);
                int c=a[i]+a[j]-dis;
                if(c<=k){
                    ans=max(ans,b[i]+b[j]);
                }
            }
        }
        cout<<ans<<endl;
    }
}
