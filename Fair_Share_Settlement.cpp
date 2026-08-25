#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int share = N / (K + 1);
        int net = N - K * share;

        cout << net << '\n';
    }

    return 0;
}