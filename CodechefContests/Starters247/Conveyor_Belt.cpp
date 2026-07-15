#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, P;
        cin >> N >> P;
        string S;
        cin >> S;
        int left = 0, right = 0;
        for (int i = 0; i < P; i++) {
            if (S[i] == 'R')
                left++;
        }
        for (int i = P - 1; i < N; i++) {
            if (S[i] == 'L')
                right++;
        }
        cout << min(left, right) << endl;
    }
    return 0;
}