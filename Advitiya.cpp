#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    string target = "ADVITIYA";

    while (T--) {
        string S;
        cin >> S;

        int ans = 0;

        for (int i = 0; i < 8; i++) {
            int diff = target[i] - S[i];

            if (diff < 0)
                diff += 26;

            ans += diff;
        }

        cout << ans << '\n';
    }

    return 0;
}