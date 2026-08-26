#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ans = 1;

        for (int i = 1; i * i <= N; i++) {
            ans = i * i;
        }

        cout << ans << endl;
    }

    return 0;
}