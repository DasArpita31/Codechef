#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            if (i % 2 == 0) {
                if (x % 2 == 0) cnt1++;
            } else {
                if (x % 2 == 1) cnt1++;
            }
            if (i % 2 == 0) {
                if (x % 2 == 1) cnt2++;
            } else {
                if (x % 2 == 0) cnt2++;
            }
        }
        cout << min(cnt1, cnt2) << endl;
    }
    return 0;
}