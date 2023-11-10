#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int games = ceil((y - x) / 8.0);
        cout << games << endl;
    }
    return 0;
}