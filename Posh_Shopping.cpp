#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> C(N);

        for (int i = 0; i < N; i++) {
            cin >> C[i];
        }

        // Buying only one item
        int ans = *max_element(C.begin(), C.end());

        // Try every pair
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (C[i] <= C[j]) {
                    ans = max(ans, C[i] + C[j]);
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}