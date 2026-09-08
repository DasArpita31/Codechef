#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int total = 0;

        for (int i = 0; i < N; i++) {
            int a;
            cin >> a;
            total += a;
        }

        int ans = (total + X - 1) / X;

        cout << ans << endl;
    }

    return 0;
}