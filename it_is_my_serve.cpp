#include <iostream>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int P, Q;
        std::cin >> P >> Q;

        // Calculate the total number of points played so far
        int total_points = P + Q;

        // Determine whose serve it is
        if (total_points % 4 == 0) {
            // If the total points played is a multiple of 4, it's Alice's serve
            std::cout << "Alice" << std::endl;
        } else {
            // Otherwise, it's Bob's serve
            std::cout << "Bob" << std::endl;
        }
    }

    return 0;
}
