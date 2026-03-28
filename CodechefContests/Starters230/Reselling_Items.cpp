#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
            sort(a,a+n,greater<int>());
            int p=0;
            for(int i=0;i<n;i++){
            int c=(i<k)?5:10;
            if(a[i]>c){
            p+=(a[i]-c);
                }
            }
        cout<<p<<endl;
    }
}
