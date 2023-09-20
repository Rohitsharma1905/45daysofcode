#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x, y;
    cin >> x >> y;

    int chairsNeeded = x - y;
    if (chairsNeeded < 0) {
      chairsNeeded = 0;
    }

    cout << chairsNeeded << endl;
  }

  return 0;
}
