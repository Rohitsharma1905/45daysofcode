#include <iostream>

using namespace std;

bool isSpam(int following, int followers) {
  return following > 10 * followers;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int following, followers;
    cin >> following >> followers;

    if (isSpam(following, followers)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
