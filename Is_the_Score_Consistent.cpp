#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, D;
        cin >> A >> B;
        cin >> C >> D;

        if (C >= A && D >= B)
            cout << "POSSIBLE\n";
        else
            cout << "IMPOSSIBLE\n";
    }

    return 0;
}