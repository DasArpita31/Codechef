#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int r1, r2, r3, r4, r5;
        cin >> r1 >> r2 >> r3 >> r4 >> r5;

        int sum = r1 + r2 + r3 + r4 + r5;

        if (sum >= 4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}