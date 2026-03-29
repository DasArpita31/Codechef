#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n%2==0 || n%5==0) && (n%10!=0)){
            cout<<0<<endl;
        }
        else{
            int ans=1000;
            for(int i=1;i<=200;i++){
                if((i%2==0 || i%5==0) && i%10!=0){
                    ans = min(ans,abs(n-i));
                }
            }
            cout<<ans<<endl;
        }
    }
}
