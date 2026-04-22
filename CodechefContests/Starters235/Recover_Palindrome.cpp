#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ok = true;
        for(int i=0;i<n/2;i++){
            if(s[i]=='?' && s[n-i-1]=='?'){
                ok=false;
            }
        }
        if(n%2==1 && s[n/2]=='?'){
            ok=false;
        }
        cout<<(ok ? "YES\n" :"NO\n");
    }
}