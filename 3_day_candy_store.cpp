#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x, y;
    cin >> x >> y;

    int amount = 0;
    if (y <= x) {
      amount = y;
    } else {
      amount = x + 2 * (y - x);
    }

    cout << amount << endl;
  }

  return 0;
}
