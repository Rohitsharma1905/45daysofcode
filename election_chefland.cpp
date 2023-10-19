#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N, X;
        cin >> N >> X;
        int eligibleVoters = 0;

        for (int i = 0; i < N; i++) {
            int age;
            cin >> age;
            if (age >= X) {
                eligibleVoters++;
            }
        }

        cout << eligibleVoters << endl;
    }

    return 0;
}
