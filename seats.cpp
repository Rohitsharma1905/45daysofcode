#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        string deck = (N <= 15) ? "Lower" : "Upper";
        string seat = ((N % 3 == 2) || (N % 3 == 0)) ? "Double" : "Single";
        cout << deck << " " << seat << endl;
    }
    return 0;
}
