#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >>T;

    while(T--){
        int N;
        string S;
        cin>>N;
        cin>>S;

        int countA = 0, countB = 0;

        for (char ch : S) {
            if (ch == 'a')
                countA++;
            else if (ch == 'b')
                countB++;
        }

        cout<<countA<<" "<<countB<<endl;
    }

    return 0;
}
