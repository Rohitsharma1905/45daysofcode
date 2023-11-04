#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, d;
        cin >> n >> x >> d;
        int total_buns = 0;
        for (int i = 0; i < d; i++) {
            total_buns += x;
            if (total_buns >= n) {
                cout << i + 1 << endl;
                goto end;
            }
        }
        int days_left = (n - total_buns) / n + ((n - total_buns) % n != 0);
        if (days_left <= d) {
            cout << d + days_left << endl;
        } else {
            cout << "RIP" << endl;
        }
        end:;
    }
    return 0;
}
