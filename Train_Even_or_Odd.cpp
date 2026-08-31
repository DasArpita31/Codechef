#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int odd = 0, even = 0;

        for (int i = 1; i <= N; i++) {
            int x;
            cin >> x;

            if (i % 2 == 1)
                odd += x;
            else
                even += x;
        }

        cout << max(odd, even) << endl;
    }

    return 0;
}