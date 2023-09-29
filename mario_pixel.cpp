#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Calculate the time required for the bullet to reach the goomba
        int time_to_reach = Y / X;

        // If the time_to_reach is greater than or equal to Z, then Mario can fire immediately (minimum time = 0)
        if (time_to_reach >= Z) {
            cout << "0" << endl;
        } else {
            // Otherwise, Mario should wait for at least (Z - time_to_reach) seconds before firing
            cout << Z - time_to_reach << endl;
        }
    }

    return 0;
}
