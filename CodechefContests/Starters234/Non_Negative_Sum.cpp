#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;

    while(T--){
        int N;
        cin>>N;
        int A[105];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        sort(A,A+N,greater<int>());
        int sum=0,count=0;
        for(int i=0;i<N;i++){
            if(sum+A[i]>=0){
                sum+=A[i];
                count++;
            } else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}