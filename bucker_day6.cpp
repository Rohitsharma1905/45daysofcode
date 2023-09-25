#include <iostream>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int X, Y;
    cin >> X >> Y;

    // The maximum number of people that can take a bath is the total amount of
    // water in the geyser divided by the amount of water required by one person.
    int max_people = X / (2 * Y);

    cout << max_people << endl;
  }

  return 0;
}
