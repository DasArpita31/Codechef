#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[40005];
        long long f[80010]={0};

        for (int i=1;i<=N;i++){
            cin >> A[i];
        }

        for (int i=1;i<=N;i++){
            int v=A[i]-i+N;
            f[v]++;
        }
        long long ans = 0;
        for (int i=0;i<=2*N;i++){
            long long k=f[i];
            ans+=(k*(k-1))/2;
        }
        cout<<ans<<endl;
    }
}
