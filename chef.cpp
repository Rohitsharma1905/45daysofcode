#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;
        
        int available_memory = S - X - Y;
        if (available_memory >= Z) {
            cout << "0" << endl;
        } else if (available_memory + X >= Z || available_memory + Y >= Z) {
            cout << "1" << endl;
        } else {
            cout << "2" << endl;
        }
    }
    return 0;
}
