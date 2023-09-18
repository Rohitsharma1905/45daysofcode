#include <iostream>

using namespace std;

bool check_water_intake(int water_intake) {
  // Checks if Chef followed the doctor's advice.
  //
  // Args:
  //   water_intake: The amount of water Chef drank today in ml.
  //
  // Returns:
  //   True if Chef followed the doctor's advice, False otherwise.

  if (water_intake >= 2000) {
    return true;
  } else {
    return false;
  }
}

int main() {
  // Determines if Chef followed the doctor's advice for each test case.

  int num_test_cases;
  cin >> num_test_cases;

  for (int test_case = 0; test_case < num_test_cases; test_case++) {
    int water_intake;
    cin >> water_intake;

    if (check_water_intake(water_intake)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
