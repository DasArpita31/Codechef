#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int total = N * K;

        int H = total / 60;
        int M = total % 60;

        cout << H << " " << M << endl;
    }

    return 0;
}