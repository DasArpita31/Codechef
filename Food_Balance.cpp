#include <bits/stdc++.h>
using namespace std;

int main() {
    int F1, P1, F2, P2;
    cin >> F1 >> P1 >> F2 >> P2;

    int d1 = abs(F1 - P1);
    int d2 = abs(F2 - P2);

    if (d1 < d2)
        cout << "First";
    else if (d2 < d1)
        cout << "Second";
    else
        cout << "Both";

    return 0;
}