#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ones = 0, twos = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if (x == 1)
                ones++;
            else
                twos++;
        }

        int ans;

        if (ones == 0 || twos == 0) {
            // Already good
            ans = 0;
        }
        else if (ones % 2 == 0) {
            // Either convert all 1s to 2s,
            // or convert all 2s to 1s
            ans = min(ones / 2, twos);
        }
        else {
            // Cannot convert all 1s into 2s because
            // one 1 will remain.
            // So convert every 2 into two 1s.
            ans = twos;
        }

        cout << ans << '\n';
    }

    return 0;
}