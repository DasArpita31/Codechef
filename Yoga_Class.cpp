#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        int ans;

        if (Y > 2 * X) {
            ans = (N / 2) * Y + (N % 2) * X;
        } else {
            ans = N * X;
        }

        cout << ans << '\n';
    }

    return 0;
}