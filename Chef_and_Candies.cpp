#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        if (X >= N)
            cout << 0 << endl;
        else {
            int needed = N - X;
            cout << (needed + 3) / 4 << endl;
        }
    }

    return 0;
}