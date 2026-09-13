#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N, X;
        cin >> N >> X;

        int total = N * X;
        int pizza = (total + 3) / 4;

        cout << pizza << endl;
    }

    return 0;
}