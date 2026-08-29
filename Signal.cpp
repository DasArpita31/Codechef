#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        bool seenZero = false;
        int ans = 0;

        for (char c : S) {
            if (c == '0') {
                seenZero = true;
            }
            else if (c == '1' && seenZero) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}