#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ans = 0;
        int lastParity = -1;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            int parity = x % 2;

            if (parity != lastParity) {
                ans++;
                lastParity = parity;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}