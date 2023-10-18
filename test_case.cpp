#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y; // Number of problems, maximum marks per problem, and desired score

        if (Y % X == 0 && Y / X <= N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
