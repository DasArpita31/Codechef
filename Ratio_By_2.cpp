#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int ans = 1000000;

        // Try changing X
        for (int d = -20; d <= 20; d++) {
            int newX = X + d;

            if (newX >= 1 &&
                (newX >= 2 * Y || Y >= 2 * newX)) {
                ans = min(ans, abs(d));
            }
        }

        // Try changing Y
        for (int d = -20; d <= 20; d++) {
            int newY = Y + d;

            if (newY >= 1 &&
                (X >= 2 * newY || newY >= 2 * X)) {
                ans = min(ans, abs(d));
            }
        }

        cout << ans << '\n';
    }

    return 0;
}