#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        // Calculate the absolute difference between x and y
        int diff = abs(x - y);
        
        // The minimum number of button presses is equal to the difference
        cout << diff << endl;
    }
    
    return 0;
}
