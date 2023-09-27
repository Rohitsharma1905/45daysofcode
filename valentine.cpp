#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x, y;
    cin >> x >> y;

    int max_chocolates = x / y;

    cout << max_chocolates << endl;
  }

  return 0;
}
