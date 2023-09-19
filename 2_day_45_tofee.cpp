#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;

    int total_amount = 5 * x + 10 * y;
    int max_chocolates = total_amount / z;

    cout << max_chocolates << endl;
  }

  return 0;
}
