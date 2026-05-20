#include <iostream>
using namespace std;

int main() {
    int X,Y,Z;
    cin >>X>>Y>>Z;

    int c;
    if (Z<=50) {
        c=X;
    } else {
        c=X+(Z-50)*Y;
    }
    cout <<c<<endl;
    return 0;
}
