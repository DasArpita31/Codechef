#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        for (int D = 0; D <= min(X, Y); D++) {
            if ((X - D) % 3 == 0 && (Y - D) % 3 == 0) {
                cout << D << '\n';
                break;
            }
        }
    }

    return 0;
}