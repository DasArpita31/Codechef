#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (Y > X)
        cout << "INCREASED";
    else if (Y < X)
        cout << "DECREASED";
    else
        cout << "SAME";

    return 0;
}