#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A1, A2, B1, B2, C1, C2;
    cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;

    int total = max(A1, A2) + max(B1, B2) + max(C1, C2);

    cout << total << endl;

    return 0;
}