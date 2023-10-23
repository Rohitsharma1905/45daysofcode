#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y;
        cin >> X >> Y;
        int neighbours = X / Y;
        if (X % Y != 0) {
            neighbours--;
        }
        cout << neighbours << endl;
    }
    return 0;
}
