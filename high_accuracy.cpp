#include <iostream>

int main() {
    int T;
    std::cin >> T;
    
    while (T--) {
        int X;
        std::cin >> X;
        
        // Calculate the number of incorrect answers.
        int incorrect = (X % 3 == 0) ? 0 : 3 - (X % 3);
        
        std::cout << incorrect << std::endl;
    }
    
    return 0;
}
