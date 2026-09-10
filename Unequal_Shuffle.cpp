#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        string A, B;

        cin >> N;
        cin >> A;
        cin >> B;

        int countA = 0;
        int countB = 0;

        for (int i = 0; i < N; i++)
        {
            if (A[i] == 'a')
                countA++;

            if (B[i] == 'a')
                countB++;
        }

        if (countA + countB == N)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}