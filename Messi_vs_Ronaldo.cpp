#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;

    int Messi = 2 * A + B;
    int Ronaldo = 2 * X + Y;

    if (Messi > Ronaldo)
        cout << "Messi" << endl;
    else if (Ronaldo > Messi)
        cout << "Ronaldo" << endl;
    else
        cout << "Equal" << endl;

    return 0;
}