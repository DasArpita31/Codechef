#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        string S;
        cin >> S;

        int ones = 0;
        for (char c : S)
            if (c == '1')
                ones++;

        int canChange = 0;
        bool foundOne = false;

        for (int i = N - 1; i >= 0; i--) {
            if (S[i] == '1') {
                foundOne = true;
            } else if (foundOne) {
                canChange++;
            }
        }

        cout << ones + min(K, canChange) << '\n';
    }

    return 0;
}